/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *8/4/15
 *C2A5E1_SwapObjects.c
 *Win7
 *Visual C++ 11.0
 *
 *Through the use of pointers, swap two objects
 *Email title: C2A5E1_U06369876
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SwapObjects(void *pa, void *pb, size_t size)
{
   //Need temporary storage to properly use memcpy
   void *tempStorage;
   //safely allocate memory for tempStorage of size size
   if ((tempStorage = malloc(size)) == NULL)
   {
      fputs("Out of memory, sucks buddy\n", stderr);
      exit(EXIT_FAILURE);
   }
   //uses memcpy to swap the items.  Need temp object
   memcpy(tempStorage, pb, size);
   memcpy(pb, pa, size);
   memcpy(pa, tempStorage, size);
   //Free allocation given to tempStorage
   free(tempStorage);
}
