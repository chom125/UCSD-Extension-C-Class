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
#include <string.h>
#include "C2A6E4_List-Driver.h"
#define MAX_STRING_SIZE 256
static List *NewList()
{
   //Function to dynamically allocate memory for a new list
   List *toReturn;
   if ((toReturn = (List *)malloc(sizeof(List))) == NULL)
   {
      //If no memory, exits
      fputs("Out of memory, exit\n", stderr);
      exit(EXIT_FAILURE);
   }
   return(toReturn);
}


List *CreateList(FILE *fp)
{
   char rString[MAX_STRING_SIZE];
   List *head = NULL;
   //Need to loop through entire text document, breaking into strings based on whitespace
   while (fscanf(fp, "%255s", rString) != EOF)
   {
      List *scanner;

      //Loop through current list looking if rString already present
      for (scanner = head; scanner != NULL && strcmp(scanner->str, rString); scanner = scanner->next)
         ;
      //If item found, add one to the count of that item
      if (scanner != NULL && strcmp(scanner->str, rString) == 0)
      {
         scanner->count++;
      }
      else
      {
         List *ptr;
         size_t strLen;
         char *buffer;
         //If no instance of string, will create a new list element
         ptr = NewList();
         //Sets the "next" value to the head of list (next element)
         ptr->next = head;
         //Set count to one
         ptr->count = 1;
         //Point str to the active string, rString...think this may need to be different
         strLen = strlen(rString) + 1;
         if ((buffer = (char *)malloc(strLen)) == NULL)
         {
            fputs("Error message", stderr);
            exit(EXIT_FAILURE);
         }
         memcpy(buffer, rString, strLen);
         ptr->str = buffer;
         //Saves ptr into head, so can reference next time around
         head = ptr;
      }
   }
   return head;
}

List *PrintList(const List *head)
{
   //Iterate through the list, the next element is pointed to by head->next
   List *step;
   for (step = (List *)head; step != NULL; step = step->next)
   {
      //Print the values...need to allign this properly
      printf("%-20s%5d ea\n", step->str, step->count);
   }
   return (List *)head;
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
