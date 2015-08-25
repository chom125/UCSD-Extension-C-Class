/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *8/8/15
 *C2A7E4_ReverseEndian.c
 *Win7
 *Visual C++ 11.0
 *
 *This will reverse the Endian order
 *Does not take into consideration a desired order, just flips it
 *Email title: C2A7E3_U06369876
 */
#include <stdio.h>
#include <stdlib.h>

void *ReverseEndian(void *ptr, size_t size)
{
   //Swaps the Endian order
   //Create copy of ptr, so can return original
   char *head = (char *)ptr;
   //Calculate end difference based on size
   char *tail = head + size - 1;
   for (; tail > head; --tail, ++head)
   {
      //Go through pointer and swap all elements
      char temp = *head;
      *head = *tail;
      *tail = temp;
   }
   return ptr;
}
