/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *7/1/15
 *C2A3E4_ParseStringFields.c
 *Win7
 *Visual C++ 11.0
 *
 *This file will use strtok to break a text input up into new lines, based on strtok
 *Email title: C2A3E4_U06369876
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define DELIMIT "AEIOUaeiou\n"
#define BUFFER 256
void ParseStringFields(FILE *fp)
{
   //This will read input from FILE FP, and split each line using strtok
   char textLine[BUFFER];
   //This will read line by line till the end of the file
   while (fgets(textLine, BUFFER, fp))
   {
      char *strokPoint;
      //Will loop through until the end of the tokens returned by strtok is reached
      for (strokPoint = strtok(textLine, DELIMIT); strokPoint != NULL;)
      {
         while (isspace((int)*strokPoint))
         {
            //Will move the point until the beginning of the line is not a whitespace char
            strokPoint++;
         }
         //Once all leading whitespace is reached, prints out the rest of the pointer
         printf("%s\n", strokPoint);
         //Calling strokPoint again moves where the token points to
         strokPoint = strtok(NULL, DELIMIT);
      }
   }
}
