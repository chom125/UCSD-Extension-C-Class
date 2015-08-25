/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *8/8/15
 *C2A7E4_ProcessStructures.c
 *Win7
 *Visual C++ 11.0
 *This will write data of struc Test to a file, read it, and 
 *perform an Endian reversal for all items in the structure
 *The result was correct based on my implmentation, there were four padding bytes
 *between the float and double, non between double and void
 *There were also four trailing bytes of padding.  This is a total of eight
 *Email title: C2A7E4_U06369876
 */
#include <stdio.h>
#include <stdlib.h>
#include "C2A7E4_Test-Driver.h"

void *ReverseEndian(void *ptr, size_t size);

struct Test *ReadStructures(struct Test *ptr, size_t count, FILE *fp)
{
   //This will read count number of Test objects and check it read the correct number
   size_t readCount = fread(ptr, sizeof(struct Test), count, fp);
   if (readCount != count)
   {
      //fread returns the number of counts made, if wrong exit/print error
      fprintf(stderr, "Improper number of Tests read\n");
      exit(EXIT_FAILURE);
   }
   return ptr;
}

struct Test *ReverseMembersEndian(struct Test *ptr)
{
   //Call reverseEndian for each member in Test pointed to by ptr
   //Float first
   ReverseEndian((void *)&ptr->flt, sizeof(ptr->flt));
   //Double next, get address from the item itself
   ReverseEndian((void *)&ptr->dbl, sizeof(ptr->dbl));
   //void float last
   ReverseEndian((void *)&ptr->vp, sizeof(ptr->vp));
   return ptr;
}

struct Test *WriteStructures(const struct Test *ptr, size_t count, FILE *fp)
{
   //Will write Test to file
   if (fwrite(ptr, sizeof(struct Test), count, fp) != count)
   {
      //fwrite returns the number of counts written, if wrong exit/print error
      fprintf(stderr, "Improper number of Tests written\n");
      exit(EXIT_FAILURE);
   }
   return (struct Test *)ptr;
}
