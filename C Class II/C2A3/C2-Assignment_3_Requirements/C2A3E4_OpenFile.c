/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *7/1/15
 *C2A3E4_OpenFile.c
 *Win7
 *Visual C++ 11.0
 *
 *This function will open a file and return a point to it
 *Email title: C2A3E4_U06369876
 */
#include <stdio.h>
#include <stdlib.h>

FILE *OpenFile(const char *fileName)
{
   FILE *inFile;
   //Test the file, if available open, if not return error
   if ((inFile = fopen(fileName, "r")) == NULL)
   {
      //Print to stderr when printing errors
      fprintf(stderr, "Can't open \"myfile\"\n");
      exit(EXIT_FAILURE);
   }
   return(inFile);
}
