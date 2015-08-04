/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *8/4/15
 *C2A5E1_Create2D.c
 *Win7
 *Visual C++ 11.0
 *
 *Through the use of pointers, swap two objects
 *Email title: C2A5E2_U06369876
 */
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "C2A5E2_Type-Driver.h"

void *SafeMalloc(size_t inputSize);

Type **Create2D(size_t rows, size_t cols)
{
   Type **pointer1, **pointer2, **end;
   pointer1 = (Type **)SafeMalloc(rows *sizeof(Type*));
   cols *= sizeof(Type);
   for (end = pointer1 + rows, pointer2 = pointer1; pointer1 < end; ++pointer1)
      *pointer2 = (Type *)SafeMalloc(cols);
   return(pointer1);
}

void *SafeMalloc(size_t inputSize)
{
   void *voidPoint;
   if ((voidPoint = malloc(inputSize)) == NULL)
   {
      fputs("Out of memory, sucks buddy\n", stderr);
      exit(EXIT_FAILURE);
   }
   
   return(voidPoint);
}

void Free2D(void *p)
{
   free(p);
}
