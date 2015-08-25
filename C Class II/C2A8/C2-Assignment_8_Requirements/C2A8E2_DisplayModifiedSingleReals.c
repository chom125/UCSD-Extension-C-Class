/*
*Craig Ricker, U06369876
*lucke.pirate@gmail.com
*_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
*8/8/15
*C2A7E1_main.c
*Win7
*Visual C++ 11.0
*
*Using both a hashtable and binary list sort and store the number of repeats
*Email title: C2A7E1_U06369876
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define F_NORM 1
#define F_DENORM 2
#define F_PZERO 3
#define F_NZERO (-F_PZERO)
#define F_PINF 4
#define F_NINF (-F_PINF)
#define F_PNAN 5
#define F_NNAN (-F_PNAN)

#define SIGN_MASK 0X80000000uL
#define EXP_MASK 0x7F800000uL
#define FRAC_MASK 0x007FFFFFuL
#define FRAC_BITS 23
#define EXP_NBIAS 127
#define EXP_DBIAS 127
#define EXP_MAX 255

#define ARRAY_SIZE 4

void *SafeMalloc(size_t size)
{
   void *vp;

   if ((vp = malloc(size)) == NULL)
   {
      fputs("Out of memory\n", stderr);
      exit(EXIT_FAILURE);
   }
   return(vp);
}

void DisplayModifiedSingleReals(FILE *inFile)
{
   unsigned long pattern;
   int arrayLoop;
   size_t readCount;

    unsigned char buffer[ARRAY_SIZE]; // = SafeMalloc(CHAR_BIT* ARRAY_SIZE);
   readCount = fread(buffer, sizeof(unsigned char), ARRAY_SIZE, inFile);
   if (readCount != ARRAY_SIZE)
   {
      printf("Unexpected EOF\n");
   }
    
   // unsigned long val = (unsigned long) buffer[0] << 24;
   for (pattern = (unsigned long) buffer[ARRAY_SIZE - 1], arrayLoop = ARRAY_SIZE - 2; arrayLoop >= 0; arrayLoop--)
   {
      printf("Buffer[%d] is: %08x\n", arrayLoop, buffer[arrayLoop]);
      printf("pattern is: %08lx\n", pattern);
       pattern |= (unsigned long) buffer[arrayLoop] << (ARRAY_SIZE - 1 - arrayLoop) * 8;
      printf("pattern is: %08lx\n", pattern);
   }
   printf("ThIS is a test\n");
   //for (;;readCount = fread(

}
//
//void HelpDisplay(unsigned long pattern)
//{
//   //Print out the pattern
//   int signIsnegative = !!(SIGN_MASK & pattern);
//   int exponent = (EXP_MASK & pattern) >> FRAC_BITS;
//   long fraction = FRAC_MASK & pattern;
//   int bias, status;
//   double result;
//   
//   if (exponent == 0 && fraction == 0)
//   {
//      status = signIsnegative ? F_NZERO : F_PZERO;
//      result = 0;
//   }
//   else if (exponent == EXP_MAX && fraction == 0)
//   {
//      status = signIsnegative ? F_NINF :F_PINF;
//   }
//   else if (exponent == EXP_MAX && fraction != 0)
//      status = signIsnegative ? F_NNAN : F_PNAN;
//   else
//      result = fraction * pow(2.0, -FRAC_BITS);
//      
//      if (exponent != 0)
//      {
//         bias = EXP_NBIAS;
//         status = F_NORM;
//         ++result;
//      }
//      else
//      {
//         bias = EXP_DBIAS;
//         status = F_DENORM;
//      }
//      result *= pow(2.0, exponent - bias);
//      
//      if (signIsnegative)
//         result = -result;
//}
