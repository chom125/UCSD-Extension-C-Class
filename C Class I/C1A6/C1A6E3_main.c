/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell
 *4/21/15
 *C1A6E3_main.c
 *Win7
 *Visual C++ 11.0
 *
 *Taking as input: string, start index, and count
 *This program will return a substring using the start index
 *and indexing until count places is reacehd
 *This will allow us to explore string manipulation
 *Email title: C1A6E3_U06369876
 */

#include <stdio.h>
#include <string.h>
#define LENGTH 256
char *GetSubstring(const char source[], int start, int count, char result[]);
int main(void)
{
   int start_index, char_count;
   char usr_input[LENGTH], buffer[LENGTH];
   //This will prompt the user for a string, store it and remove \n
   printf("input a string please\n");
   fgets(usr_input, LENGTH, stdin);
   usr_input[strlen(usr_input) - 1] = '\0';
   //It will then be fed into GetSubstring and printed out
   printf("On the same line, enter start index and character count\n");
   scanf("%d", &start_index);
   scanf("%d", &char_count);
   printf("\"");
   printf(usr_input);
   printf("\", %d, %d, extracts \"", start_index, char_count);
   printf(GetSubstring((const char *)&usr_input, start_index, char_count, buffer));
   printf("\"\n");
   return 0;
}
