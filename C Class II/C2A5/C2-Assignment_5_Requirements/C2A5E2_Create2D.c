/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *8/4/15
 *C2A5E2_Create2D.c
 *Win7
 *Visual C++ 11.0
 *
 *Creates a 2D array dynamically, using a continuous memory block
 *Email title: C2A5E2_U06369876
 */
#include <stdio.h>
#include <stdlib.h>
#include "C2A5E2_Type-Driver.h"

void *SafeMalloc(size_t inputSize);

Type **Create2D(size_t rows, size_t cols)
{
   //A messy collection of pointers used to keep track of location in the array
   Type **start, **active, *middle, **end;
   //Creates a continuous memory block of the proper size
   start = (Type **)SafeMalloc(rows * sizeof(Type *) + rows * cols * sizeof(Type));
   for (end = start + rows, active = start, middle = (Type *)end; active < end; ++active)
   {
      *active = middle;
      //Offsets middle by the number of cols
      middle += cols;
   }
   return(start);
}

void *SafeMalloc(size_t inputSize)
{
   //Safe function to allocate memory
   void *voidPoint;
   //If not enough memory, exit and alerts user
   if ((voidPoint = malloc(inputSize)) == NULL)
   {
      fputs("Out of memory, sucks buddy\n", stderr);
      exit(EXIT_FAILURE);
   }
   return(voidPoint);
}

void Free2D(void *p)
{
   //Simple function to free the memory
   //Think this is all that is required...it is a continuous memory block
   free(p);
}
