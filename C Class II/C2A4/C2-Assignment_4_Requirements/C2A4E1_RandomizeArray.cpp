//
//  C2A4E1_ArraySize.cpp
//  Class Test
//
//  Created by Craig Ricker on 7/27/15.
//  Copyright (c) 2015 Jortssports. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "C2A4E1_ArraySize.h"

void RandomizeArray(float inputArray[DIM1][DIM2][DIM3][DIM4])
{
   //Loops through the array with pointers, to set all values to a random float
   for (float *arrayPointer = (float *)inputArray; arrayPointer < (float *)inputArray + DIM1 * DIM2 * DIM3 * DIM4;
        ++arrayPointer)
   {
      srand(time(NULL));
      *arrayPointer =  (float) rand();
   }
}
