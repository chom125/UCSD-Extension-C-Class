/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell
 *4/21/15
 *C1A5E3_ComputeMinimum.cpp
 *Win7
 *Visual C++ 11.0
 *
 *This file will compare the Minimum of two input, and return
 *A pointer to the double
 */

double *ComputeMinimum(const double *val1, const double *val2)
{
   //This will calculate the Minimum of two values
   return (double *)((*val1 < *val2) ? val1 : val2);
}
