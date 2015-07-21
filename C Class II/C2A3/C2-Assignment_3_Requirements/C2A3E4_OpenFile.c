/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *7/1/15
 *C2A3E3_RecordOpinions.c
 *Win7
 *Visual C++ 11.0
 *
 *This file will record and then read back a number of ratings
 *Use a single 1d array to store all the values
 *Email title: C2A3E3_U06369876
 */
#include <stdio.h>
#include <stdlib.h>

FILE *OpenFile(const char *fileName)
{
   FILE *inFile;
   if ((inFile = fopen(filName, 'r')) == NULL)
   {
      fprintf(stderr, "Can't open \"myfile\"\n");
      exit(EXIT_FAILURE);
   }
   return(inFile);
}