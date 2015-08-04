/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *7/1/15
 *C2A4E1_RandomizeArray.cpp
 *Win7
 *Visual C++ 11.0
 *
 *Using pointers as input, sets an array to random integers using srand and time to seed it
 *Email title: C2A4E1_U06369876
 */

#include <ctime>
#include <cstdlib>
#include "C2A4E1_ArraySize.h"

void RandomizeArray(float inputArray[DIM1][DIM2][DIM3][DIM4])
{
   //Seeds srand using the time function
   srand((unsigned int)time(NULL));
   //Loops through the array with pointers, to set all values to a random float
   for (float *arrayPointer = (float *)inputArray;
      arrayPointer < (float *)inputArray + DIM1 * DIM2 * DIM3 * DIM4; ++arrayPointer)
   {
      *arrayPointer =  (float)rand();
   }
}
