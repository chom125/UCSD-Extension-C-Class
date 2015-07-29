/*
 *Craig Ricker, U06369876 
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *7/1/15
 *C2A4E1_WorkerFunction.cpp
 *Win7
 *Visual C++ 11.0
 *
 *Simple function which drives the use of RandomizeArray and ComputeAverages
 *Email title: C2A4E1_U06369876
 */
#include "C2A4E1_ArraySize.h"
//Need to include prototypes so the functions can be ran
void RandomizeArray(float inputArray[DIM1][DIM2][DIM3][DIM4]);
void ComputeAverages(float inputArray[DIM1][DIM2][DIM3][DIM4], float *nestedAvg, float *linearAvg);
void WorkerFunction(float *nestedAvg, float *linearAvg)
{
   //Creates an empty array with dimensions dictated by variables in ArraySize.h
   float testArray[DIM1][DIM2][DIM3][DIM4];
   //Sets array to random floats, and computes the average
   RandomizeArray(testArray);
   ComputeAverages(testArray, nestedAvg, linearAvg);
}
