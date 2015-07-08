/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell
 *6/3/15
 *C1A7E2_main.c
 *Win7
 *Visual C++ 11.0
 *
 *This will allow us to explore the use of allocating memory through the use of malloc and memcpy
 *In this program, a food structure will be created that contains a name, weight and caloric content
 *The user will be asked to input LUNCH_ITEMS number of foods, which will be stored
 *All values in lunch will then be output into a formatted table
 *Email title: C1A7E2_U06369876
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LINE_SIZE 128
#define LUNCH_ITEMS 5
#define LUNCH_START 2

void *SafeMalloc(size_t size);
int main(void)
{
   int loop_count = LUNCH_START;
   struct Food
   {
      char *name;             /* "name" attribute of food */ 
      int weight, calories;   /* "weight" and "calories" attributes of food */ 
   } 
   lunch[LUNCH_ITEMS] = {{"Apple", 4, 100}, {"Salad", 2, 80}};
   for (; loop_count < LUNCH_ITEMS; loop_count++)
   {
      char temp_char_buff[LINE_SIZE];
      //This prompts the user for name, weight, and calories of a new food
      printf("Please enter white space separated food: name, weight, and calories:\n");
      //Saves the food name, and removes new line character, saves strlen to use for memcpy
      scanf("%127s %d %d", temp_char_buff, &lunch[loop_count].weight, &lunch[loop_count].calories);
      //This uses a malloc call to point name to the proper size
      lunch[loop_count].name = (char *)SafeMalloc(sizeof(temp_char_buff));
      //this will then copy the text from temp_char_buff into location pointed to by .name
      memcpy(lunch[loop_count].name, &temp_char_buff, strlen(temp_char_buff) + 1);
   }
   //The contents of lunch will then be printed in a nice table
   printf("Food Name     Weights     Calories\n");
   for (loop_count = 0; loop_count < LUNCH_ITEMS; loop_count++)
   {
      printf("%-11s", lunch[loop_count].name);
      printf("%12d", lunch[loop_count].weight);
      printf("%17d\n", lunch[loop_count].calories);
      if (loop_count > 1)
         free(lunch[loop_count].name);
   }
   return 0;
}

void *SafeMalloc(size_t size)
{
   //This function is taken directly from the book
   //It is a "Safe" version of malloc which will exit the program if an error occurs
   void *vp;
   if ((vp = malloc(size)) == NULL)
   {
      fputs("Out of memory\n", stderr);
      exit(EXIT_FAILURE);
   }
   return(vp);
}
