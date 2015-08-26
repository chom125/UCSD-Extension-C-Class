/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *8/8/15
 *C2A8E2_OpenFileBinary.c
 *Win7
 *Visual C++ 11.0
 *
 *Open a file in binary mode,a nd return a pointer to the FILE
 *Email title: C2A8E2_U06369876
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


FILE *OpenFileBinary(const char *fileName)
{
   FILE *inFile;
   //Test the file, if available open in binary, if not return error
   if ((inFile = fopen(fileName, "rb")) == NULL)
   {
      //Print to stderr when printing errors
      fprintf(stderr, "Can't open \"myfile\"\n");
      exit(EXIT_FAILURE);
   }
   return(inFile);
}
