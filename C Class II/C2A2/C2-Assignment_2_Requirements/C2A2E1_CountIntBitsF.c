/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *7/1/15
 *C2A2E1_CountIntBitsF.c
 *Win7
 *Visual C++ 11.0
 *
 *This file will calculate the bits used to represent type int
 *Email title: C2A2E1_U06369876
 *To my understanding, the calculated size of in can be different for CountsBitsM and CountIntBitsF
 *CountBitsM includes storage referred to as "padding" by the teacher.  
 *CountBitsF calculates the bits required for a single number, and ignores all possible padding storage
 */
#define BITSHIFT 1


int CountIntBitsF(void)
{
   //This will calculate the number of bits used to store an int
   int shiftCount = 0;
   unsigned int oneInt;
   //It will left shift oneInt until it reaches zero aka the number of bits
   for (oneInt = 1; oneInt != 0; shiftCount++)
   {
      oneInt <<= BITSHIFT;
   }
   return shiftCount;
}
