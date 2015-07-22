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

#define ENDPOINT 3
#define TERMINATE 99
#define ARRAYSIZE (2 * ENDPOINT + 1)
void RecordOpinions(void)
{
   //This function will record ratings, and then print them out
   int curInt;
   int userResponses[ARRAYSIZE] = {0};

   for (;;)
   {
      //Exits when the terminate character is entered
      printf("Please insert a score for....something\n");
      scanf("%d", &curInt);
      if (curInt == TERMINATE)
      {
         //Breaks the loop when terminate entered
         printf("Exiting loop!\n");
         break;
      }
      else if (curInt > ENDPOINT | curInt < -ENDPOINT)
      {
         //Continues if the curInt is too large or small
         printf("Please enter a valid number!\n");
         continue;
      }
      else
         //If an acceptable answer, adds one to the array
         userResponses[ENDPOINT + curInt]++;
   }
   //Prints labels, using pading
   printf("%10s%20s\n", "Rating", "Responses\n");
   for (curInt = 0; curInt < ARRAYSIZE; curInt++)
   {
      //Modify the rating number, so it coresponds to the correct rating
      printf("%10d%20d\n", -ENDPOINT + curInt, userResponses[curInt]);
   }
   return;
}
