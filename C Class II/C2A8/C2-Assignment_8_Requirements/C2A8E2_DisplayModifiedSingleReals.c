/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *8/8/15
 *C2A8E2_DisplayModifiedSingleReals.c
 *Win7
 *Visual C++ 11.0
 *
 *Reads through binary file, and converts different number form to standard
 *Email title: C2A8E2_U06369876
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define F_PNORM 1
#define F_NNORM (-F_PNORM)
#define F_PDENORM 2
#define F_NDENORM (-F_PDENORM)
#define F_PZERO 3
#define F_NZERO (-F_PZERO)
#define F_PINF 4
#define F_NINF (-F_PINF)
#define F_PNAN 5
#define F_NNAN (-F_PNAN)

#define SIGN_MASK 0X80000000uL   /* Exponent mask*/
#define EXP_MASK 0x7FC00000uL
#define FRAC_MASK 0x003FFFFFuL
#define FRAC_BITS 22
#define EXP_NBIAS 255
#define EXP_DBIAS 254
#define EXP_MAX 511
#define BASE_POWA 2
#define HEX_SIZE 8
#define ARRAY_SIZE 4


static int HelpDisplay(unsigned long pattern, double *result)
{
   //Function stolen from book which will binary data into useable number
   int signIsnegative = !!(SIGN_MASK & pattern);
   int exponent = (EXP_MASK & pattern) >> FRAC_BITS;
   long fraction = FRAC_MASK & pattern;
   int status;
   //Tests if it is a zero
   if (exponent == 0 && fraction == 0)
   {
      //logical test to decide if is negative or positive zero
      status = signIsnegative ? F_NZERO : F_PZERO;
      *result = 0;
   }
   //Test for + or - INF
   else if (exponent == EXP_MAX && fraction == 0)
      status = signIsnegative ? F_NINF : F_PINF;
   //Test for + or 0 NAN
   else if (exponent == EXP_MAX && fraction != 0)
      status = signIsnegative ? F_NNAN : F_PNAN;
   //Defaults to number
   else
   {
      int bias;
      *result = fraction * pow(BASE_POWA, -FRAC_BITS);
      //Then calculates if number is normalized or denormalized
      if (exponent != 0)
      {
         bias = EXP_NBIAS;
         status = signIsnegative ? F_NNORM : F_PNORM;
         ++*result;
      }
      else
      {
         bias = EXP_DBIAS;
         status = signIsnegative ? F_NDENORM : F_PDENORM;
      }
      *result *= pow(BASE_POWA, exponent - bias);
      //Negate number, if required
      if (signIsnegative)
         *result = -*result;
   }
   return(status);
}

void DisplayModifiedSingleReals(FILE *inFile)
{
   //Will read through a binary file, and deal with modified single real number format
   double result;
   unsigned char buffer[ARRAY_SIZE];
   //Infinite loop, broken when EOF is reached during the loop
   for (;;)
   {
      int arrayLoop, status;
      unsigned long pattern;
      size_t readCount = fread(buffer, 1, ARRAY_SIZE, inFile);
      if (readCount != ARRAY_SIZE)
      {
         //If read count is zero, EOF reached normally
         if (readCount != 0)
            //If not, reached unexpected EOF
            printf("Unexpected EOF\n");         
         break;
      }
      for (pattern = (unsigned long)buffer[ARRAY_SIZE - 1], 
         arrayLoop = ARRAY_SIZE - BASE_POWA; arrayLoop >= 0; arrayLoop--)
         //This will create the original pattern stored into an unsigned long
         pattern |= (unsigned long)buffer[arrayLoop] << (ARRAY_SIZE - 1 - arrayLoop) * HEX_SIZE;
      //Prints out the pattern in hex format, and gives some trailing spaces/text for proper formatting
      printf("0x%08lx     ", pattern);
      //Uses help function to calculate the modified number, and number type
      status = HelpDisplay(pattern, &result);
      //Switch on status, which is a flag of number type
      switch (status)
      {
      case F_PNORM:
         printf("+%-18eNormal\n", result);
         break;
      case F_NNORM:
         printf("%-19eNormal\n", result);
         break;
      case F_PDENORM:
         printf("+%-18eDenormal\n", result);
         break;
      case F_NDENORM:
         printf("%-19eDenormal\n", result);
         break;
      case F_PZERO:
         printf("+%-18eZero\n", result);
         break;
      case F_NZERO:
         printf("-%-18eZero\n", result);
         break;
      case F_PINF:
         printf("+INF\n");
         break;
      case F_NINF:
         printf("-INF\n");
         break;
      case F_PNAN:
         printf("+NAN\n");
         break;
      case F_NNAN:
         printf("-NAN\n");
         break;
      default:
         printf("This is an error\n");
      }
      //Check if end of file has been reached by fread
      if (feof(inFile))
         break;
   }
}
