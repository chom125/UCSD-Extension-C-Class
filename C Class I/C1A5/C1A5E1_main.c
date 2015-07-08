/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell
 *4/21/15
 *C1A5E1_main.c
 *Win7
 *Visual C++ 11.0
 *
 *This function will tally responses
 *It has the ability to change the range of acceptable responses via macro changes
 *It will then output the responses in tabular format
 *Email title: C1A5E1_U06369876
 */
#include <stdio.h>
#define MAX_RESPONDENTS  12
#define MIN_RESPONSE_VALUE  0
#define MAX_RESPONSE_VALUE  10
#define OUT_OF_RANGE_LIMIT  4
#define RESPONSE_RANGE (MAX_RESPONSE_VALUE - MIN_RESPONSE_VALUE + 1)

int main(void)
{
   /*This creates an array with size determined by a macro*/
   int ratingArray[RESPONSE_RANGE] = {0};
   int surveyCount;
   int response;
   int oor_count = 0;
   /*This loop will control the responses*/
   for (surveyCount = 0; surveyCount < MAX_RESPONDENTS;)
   {
      /*If the too many illegal responses are input, it resets*/
      if (oor_count >= OUT_OF_RANGE_LIMIT)
      {
         printf("You have exceeded the number of incorrect answers. Program will terminate");
         break;
      }
      printf("Enter a decimal integer within the range of ");
      printf("%d to %d please:\n", MIN_RESPONSE_VALUE, MAX_RESPONSE_VALUE);
      scanf("%d", &response);
      /*This checks if it is a valid response, if not counts it*/
      if (response < MIN_RESPONSE_VALUE || response > MAX_RESPONSE_VALUE)
      {
         printf("%d is not a legal value, please try again.\n", response);
         oor_count++;
         continue;
      }
      /*If it is a valid response, it talies it and continues*/
      else
      {
         printf("Thank you, you answer of %d was recorded\n", response);
         response -= MIN_RESPONSE_VALUE;
         oor_count = 0;
         ratingArray[response]++;
         surveyCount++;         
      }
   }
   /*It then prints out in tabular format*/
   printf("Rating Responses\n");
   for (surveyCount = 0; surveyCount < RESPONSE_RANGE; ++surveyCount)
   {
      printf("%5d", MIN_RESPONSE_VALUE + surveyCount);
      printf("%7d\n", ratingArray[surveyCount]);
   }
   return 0;
}
