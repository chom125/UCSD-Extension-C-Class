/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *8/8/15
 *C2A7E4_OpenTemporaryFile.c
 *Win7
 *Visual C++ 11.0
 *
 *Opens a file as tmpfile
 *Email title: C2A7E4_U06369876
 */
#include <stdio.h>
#include <stdlib.h>

FILE *OpenTemporaryFile(void)
{
   //Safely creates a temporary file
   FILE *tempReturn;
   if ((tempReturn = tmpfile()) == NULL)
   {
      //If unsuccessful, prints error and exits
      fprintf(stderr, "Cannot create temporary file\n");
      exit(EXIT_FAILURE);
   }
   return(tempReturn);
}
