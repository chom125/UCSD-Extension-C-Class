/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *8/10/15
 *C2A6E4_OpenFile.c
 *Win7
 *Visual C++ 11.0
 *
 *Will safely open a file, and return a pointer to FILE
 *Email title: C2A6E4_U06369876
 */
#include <stdio.h>
#include <stdlib.h>
FILE *OpenFile(const char *fileName)
{
   //Safely open a file and return a pointer to it
   FILE *outFile;
   if ((outFile = fopen(fileName, "r")) == NULL)
   {
      //If file cannot be opened, terminate program
      fprintf(stderr, "File open failure\n");
      exit(EXIT_FAILURE);
   }
   return outFile;
}
