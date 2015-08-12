/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *8/10/15
 *C2A6E3_DisplayClassStatus.c
 *Win7
 *Visual C++ 11.0
 *
 *Uses bsearch and qsort to compare arrays
 *Email title: C2A6E3_U06369876
 */
#include <string.h>
#include <stdlib.h>
#include <stdio.h>   

int Compare(const void *elemA, const void *elemB)
{
   //Dummy formula to use qsort  and bsearch
   return (strcmp(*(char **)elemA, *(char **)elemB));
}

void SortStudents(const char *studentList[], size_t studentCount)
{
   //Calls qsort to sort the students pointed to by studenList
   qsort(studentList, studentCount, sizeof(studentList[0]), Compare);
}

void DisplayClassStatus( const char *registrants[], size_t registrantCount,
                        const char *attendees[], size_t attendeeCount)
{
   //Using bsearch identifies people registered, but not present and present, but not registered
   char *bRet;
   int loopCount;
   printf("Not present:\n");
   //Goes through attendees, all that are not present, but registered, are printed
   for (loopCount = 0; loopCount < (int) registrantCount; loopCount++)
   {
      bRet = (char *) bsearch(&registrants[loopCount],
                              attendees, attendeeCount, sizeof(attendees[0]), Compare);
      if (bRet == NULL)
         printf("%s\n", registrants[loopCount]);
   }
   printf("Not registered:\n");
   //People who attend, but not registered
   for (loopCount = 0; loopCount < (int) attendeeCount; loopCount++)
   {
      bRet = (char *) bsearch(&attendees[loopCount],
                              registrants, registrantCount, sizeof(registrants[0]), Compare);
      if (bRet == NULL)
         printf("%s\n", attendees[loopCount]);
   }
}
