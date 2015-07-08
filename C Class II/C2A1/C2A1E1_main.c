/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *7/1/15
 *C2A1E1_main.c
 *Win7
 *Visual C++ 11.0
 *
 *This program allowed us to explore reading files into C, and the use of argc/argv
 *This program will print the lines from an input file, by blocks determined by the argument
 *Passed at run time.  Pass the text name and line number through the use of argv
 *Email title: C2A1E1_U06369876
 */
#include <stdio.h>
#include <stdlib.h>

#define Sum(addend1, addend2) ((addend1) + (addend2))
#define Elements(arrayDesig) (sizeof(arrayDesig)/sizeof((arrayDesig[0])))



long *CreateArray(size_t elementCount)
{
   //This will allocate an array of elementCount with type long
   long *retArray;
   if ((retArray = (long *)malloc(elementCount)) == NULL)
      {
      printf("Memory failed, exiting\n");
      exit(EXIT_FAILURE);
      }
   return(retArray);
}

FILE *OpenFile(const char *filePath)
{
   //Opens filed pointed to by filePath, returns pointer to the FILE
   FILE *retFile;
   if ((retFile = fopen(filePath, "a+b")))
      printf("File not able to be opened\n");
      exit(EXIT_FAILURE);
   return(retFile);
}

void CopyString(char *destination, const char *source)
{
   //Copies string array from source to destination
   for (source; *source != '\0'; ++source, ++destination){
      //Goes through source, sets destination equal to source
      *destination = *source;
   }
   //exits when terminal character found, adds to end and returns
   *destination = '\0';
}

void DisplayClearedArray()
{
   //Creates a double array of size equal to the sizeof(long double)
   //Sets all value sto zero, prints all on a new line
   int arrayIndex = 0;
   double testArray[sizeof(long double)] = { 0 };
   for (arrayIndex; arrayIndex < sizeof(testArray) / sizeof(testArray[0]); arrayIndex++)
      printf("%d\n", testArray[arrayIndex]);
}

int main(void)
{
   //Main function that allows the file to compile properly
   //Print and return exit success
   printf("Assignment 1 Exercise 1 Complete!");

   return(EXIT_SUCCESS);
}
