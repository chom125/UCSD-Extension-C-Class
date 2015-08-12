/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *8/8/15
 *C2A6E2_GetValues.cpp
 *Win7
 *Visual C++ 11.0
 *
 *User prompted for array elements
 *Email title: C2A6E2_U06369876
 */
#include <iostream>

float *GetValues(float *first, size_t elements)
{
   //Inputs values into an array of size elements
   float *workingArray = first;
   for (int count = 0; count < (int)elements; count++, workingArray++)
   {
      std::cout << "Enter item for array item " << count + 1 << " out of " << elements + 1;
      std::cout << " items\n";
      std::cin >> *workingArray;
   }
   return first;
}
