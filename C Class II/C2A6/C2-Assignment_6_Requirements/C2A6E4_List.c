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

   //Need to loop through entire text document, looking for strings, ignore puncuation and spaces
   for (head = NULL, rString = fscanf(fp, "%s", rString); 
      rString != EOF; rString = fscanf(fp, "%s", rString))
      //Loop through current list looking if rString already present
      for (scanner = head; scanner != NULL && scanner->str != rString; scanner = scanner->count)
         ;
      //If item found, add one to the count of that item
      if (scanner != NULL)
         scanner->count++;
      else
      {
         //If no instance of string, will create a new list element
         ptr = NewList();
         //Sets the "next" value to the head of list (next element)
         ptr->next = head;
         //Saves ptr into head, so can reference next time around
         head = ptr;
         //Set count to zero
         ptr->count = 0;
         //Point str to the active string, rString...think this may need to be different
         ptr->str = rString;
      }
   return head;
}

List *PrintList(const List *head)
{
   //Iterate through the list, the next element is pointed to by head->next
   for (; head != NULL; head = head->next)
   {
      //Print the values...need to allign this properly
      printf("%s%d ea\n", head->str, head->count);
   }
}

void FreeList(List *head)
{
   //Need to free up all memory allocated in the list
   while (head != NULL)
   {
      //Saves the current pointer
      List *current = head;
      //Sets the pointer for the next time through
      head = current->next;
      //Frees both the current pointer, and space allocated for str
      free(current->str);
      free(current);
   }
}
