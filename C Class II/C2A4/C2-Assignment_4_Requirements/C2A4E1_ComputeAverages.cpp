//
//  C2A4E1_ArraySize.cpp
//  Class Test
//
//  Created by Craig Ricker on 7/27/15.
//  Copyright (c) 2015 Jortssports. All rights reserved.
//

#include <stdio.h>
#include "C2A4E1_ArraySize.h"
void ComputeAverages(float inputArray[DIM1][DIM2][DIM3][DIM4], float *nestedAvg, float *linearAvg)
{
   float calcAvg = 0, dimensions;
   dimensions = DIM1 * DIM2 * DIM3 * DIM4;
   for (float *arrayPointer = (float *)inputArray; arrayPointer < (float *)inputArray + DIM1 * DIM2 * DIM3 * DIM4;
        ++arrayPointer)
   {
      calcAvg += *arrayPointer;
   }
   *linearAvg = calcAvg/dimensions;
   
   calcAvg = 0;

   for(int index1 = 0;index1 < DIM1; ++index1)
      for (int index2 = 0; index2 < DIM2; ++index2)
         for (int index3 = 0; index3 < DIM3; ++index3)
            for (int index4 = 0; index4 < DIM4; ++index4)
            {
               calcAvg += inputArray[index1][index2][index3][index4];
            }
   *nestedAvg = calcAvg/dimensions;
   

   
}