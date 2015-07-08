/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell
 *4/21/15
 *C1A2E2_main.c
 *Win7
 *Visual C++ 11.0
 *
 *This is  to demonstrate the ability to use "for loops"
 *as well as nesting them, and indexing
 *not sure how we were supposed to do this...but if statements worked for me
 */
#include <stdio.h>

#define LEADER_CHAR '.'
#define DIAGONAL_CHAR '%'

int main(void)
{
   int usr_input, row;

   printf("Input an integer:\n");
   scanf("%d", &usr_input);


   for (row = 0; row < usr_input; ++row)                   /*this will control what row it is on*/
   {
      int column;                                          /*int column here to limit the scope*/
      for (column = 0; column < usr_input; ++column)       /*This will control the column*/
      {
         if (column < row)                                 /*This limits how many . are printed*/
         {
            printf("%c", LEADER_CHAR);
         }
         else 
         {
            break;                                         /*This breaks the column for loop, efficient*/
         }
      }
      printf("%c\n", DIAGONAL_CHAR);                       /*This prints out the % and creates a new line*/
   }
   return 0;
}
