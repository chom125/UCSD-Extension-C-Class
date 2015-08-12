/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *8/8/15
 *C2A6E2_SortValues.cpp
 *Win7
 *Visual C++ 11.0
 *
 *Sort an array of numbers in descending order
 *Program on page 335 of text book largely copied
 *Email title: C2A6E2_U06369876
 */
#include <cstdio>

float *SortValues(float *first, size_t elements)
{
   //Setup comp to have a number to compare to, current will cycle through
   //Setting last to the end of first will give us an end location of the array
   float *last = &first[elements - 1];
   for (bool needSwap = true; needSwap;)
   {
      float *current = first;
      //Will continue to loop until reach the end of the array
      for (needSwap = false; current < last;)
      {
         float comp = *current;
         //If the current number is less than the next, swap
         if (comp < *++current)
         {
            //Currently pointing at "next" value
            //Store
            float next = *current;
            //Set "next" pointer to "comp"
            *current = comp;
            //Still pointing at "next"
            //Move index back one, set to next
            *--current = next;
            //Move index forward one, again, to point to "next" and continue
            ++current;
            needSwap = true;
         }
      }
      //When the end of array is reached, highest number is there, alter end of array
      //More efficient, does not need to compare to end of array every single time
      --last;
   }
   return first;
}
