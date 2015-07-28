//
//  C2A4E1_ArraySize.cpp
//  Class Test
//
//  Created by Craig Ricker on 7/27/15.
//  Copyright (c) 2015 Jortssports. All rights reserved.
//

#include <stdio.h>

#include "C2A4E1_ArraySize.h"
void RandomizeArray(float inputArray[DIM1][DIM2][DIM3][DIM4]);
void WorkerFunction(float *nestedAvg, float *linearAvg)
{
   float testArray[DIM1][DIM2][DIM3][DIM4];
   RandomizeArray(testArray);
   printf("hello");
   
}
