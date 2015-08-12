/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *8/10/15
 *C2A6E4_List.c
 *Win7
 *Visual C++ 11.0
 *
 *Will create list, print, and then free it
 *Email title: C2A6E4_U06369876
 */
#include <stdio.h>
#include <stdlib.h>
#include "C2A6E4_List-Driver.h"
#define MAX_STRING_SIZE 256
List *NewList()
{
   List *toReturn;
   if ((toReturn = (List *)malloc(sizeof(List))) == NULL)
   {
      fputs("Out of memory, exit\n", stderr);
      exit(EXIT_FAILURE);
   }
   return(toReturn);
}


List *CreateList(FILE *fp)
{
   List *head, *ptr, *scanner;
   char rString[MAX_STRING_SIZE];
   for (scanner = head; scanner != NULL && scanner->next != rString; scanner = scanner->count)
      ;
   if (scanner != NULL)
      scanner->count++;
   else
   {

   }
   return head;
}

List *PrintList(const List *head)
{

}

void FreeList(List *head)
{

}


/*
Pseudocode for list function

*/