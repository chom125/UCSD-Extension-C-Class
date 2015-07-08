/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell
 *6/3/15
 *C1A8E2_main.c
 *Win7
 *Visual C++ 11.0
 *
 *This program allowed us to explore reading files into C, and the use of argc/argv
 *This program will print the lines from an input file, by blocks determined by the argument
 *Passed at run time.  Pass the text name and line number through the use of argv
 *Email title: C1A8E2_U06369876
 */

#include <stdio.h>
#include <stdlib.h>
#define FILE_INDEX 1
#define INT_INDEX 2
#define ARGC_SIZE 3

int main(int argc, char *argv[])
{
   //Initalizes all the required variables
   FILE *inFp;
   int curChar, line_count = 0, maxLines = atoi(argv[INT_INDEX]);
   //This will cancel the program if the wrong number of arguments are passed
   if (argc != ARGC_SIZE)
   {
      printf("The proper number of arguments were not input, exiting");
      return 1;
   }
   //Safely checks if the file can be opened
   if ((inFp = fopen(argv[FILE_INDEX], "r")) == NULL)
   {
      printf("Failed!");
   }
   //This will continue to read the file until the EOF character is reached
   while ((curChar = getc(inFp)) != EOF)
   {
      printf("%c", curChar);
      //Keeps track of the number of lines printed
      if (curChar == '\n')
         line_count++;
      //Allows the user to exit the program early after maxLines have been read
      if (line_count == maxLines)
      {
         printf("\nTo continue, press enter, to exit enter any other key");
         //reuse the curChar variable, professor Mitchell is this acceptable?
         curChar = getchar();
         if (curChar != '\n')
            return 0;
         else
            line_count = 0;
      }
   }
   fclose(inFp);
   return 0;
}
