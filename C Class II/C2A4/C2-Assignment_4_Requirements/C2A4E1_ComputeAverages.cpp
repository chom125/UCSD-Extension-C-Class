/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *7/1/15
 *C2A4E1_ComputeAverages.cpp
 *Win7
 *Visual C++ 11.0
 *
 *Calculates the average of all array values, through the use of several nested for loops
 *and a pointer linear loop
 *Email title: C2A4E1_U06369876
 */
#include "C2A4E1_ArraySize.h"

void ComputeAverages(float inputArray[DIM1][DIM2][DIM3][DIM4], float *nestedAvg, float *linearAvg)
{
   //Sets up a float to use in order to calculate the average
   //Save dimensions, will use multiple times
   float calcAvg = 0, dimensions;
   dimensions = DIM1 * DIM2 * DIM3 * DIM4;
   //Allows us to travel through multi dimensional array in a linear fashion
   for (float *arrayPointer = (float *)inputArray;
      arrayPointer < (float *)inputArray + DIM1 * DIM2 * DIM3 * DIM4; ++arrayPointer)
   {
      calcAvg += *arrayPointer;
   }
   //Points linearAvg to the calculated average, then sets calcAvg back to zero
   *linearAvg = calcAvg / dimensions;   
   calcAvg = 0;
   //Four dimensional loop
   for (int index1 = 0; index1 < DIM1; ++index1)
      for (int index2 = 0; index2 < DIM2; ++index2)
         for (int index3 = 0; index3 < DIM3; ++index3)
            for (int index4 = 0; index4 < DIM4; ++index4)
            {
               calcAvg += inputArray[index1][index2][index3][index4];
            }
   //Point nestedAvg to the calculated average, terminates function
   *nestedAvg = calcAvg / dimensions;   
}
