/*
*Craig Ricker, U06369876
*lucke.pirate@gmail.com
*_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
*8/8/15
*C2A7E1_main.c
*Win7
*Visual C++ 11.0
*
*Using both a hashtable and binary list sort and store the number of repeats
*Email title: C2A7E1_U06369876
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


FILE *OpenFileBinary(const char *filName)
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
