/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *8/8/15
 *C2A7E3_ReverseEndian.c
 *Win7
 *Visual C++ 11.0
 *
 *
 *Email title: C2A7E3_U06369876
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void *ReverseEndian(void *ptr, size_t size){ 
//   size_t count;
//   void* temp;
//   for (count = 0; count < size; count++){
//      temp = ptr[count];
//      ptr[count] = ptr[size - count];
//      ptr[count + size] = temp;
//   }
//}

void *ReverseEndian(void *ptr, size_t size) {
   short *tail = ptr + size;
   for(; (short*)ptr > tail; --tail, ++ptr)
   {
      short *temp = ptr;
      *temp = *(short*)tail;
      *tail = *temp;
   }
   return ptr;
}
