#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SwapObjects(void *pa, void *pb, size_t size)
{
   //Need temporary storage to properly use memcpy
   void *tempStorage;
   //safely allocate memory for tempStorage of size size
   if((tempStorage = malloc(size)) == NULL){
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
