/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *7/1/15
 *C2A2E2_CountIntBitsF.cpp
 *Win7
 *Visual C++ 11.0
 *
 *This file will calculate the bits used to represent type int
 *Email title: C2A2E2_U06369876
 *CountBitsF calculates the bits required for a single number, and ignores all possible padding storage
 */
const int BITSHIFT = 1;


int CountIntBitsF()
{
   //This will calculate the number of bits used to store an int
   int shiftCount = 0;
   //It will left shift oneInt until it reaches zero aka the number of bits
   for (unsigned int oneInt = 1; oneInt != 0; shiftCount++)
   {
      oneInt <<= BITSHIFT;
   }
   return shiftCount;
}
