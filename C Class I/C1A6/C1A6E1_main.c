/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell
 *4/21/15
 *C1A6E1_main.c
 *Win7
 *Visual C++ 11.0
 *
 *This will ask for two inputs, and output the length with strlen
 *as well as a user defined function with the same input and output
 *called MyStrlen
 *This will allow us to explore string manipulation
 *Email title: C1A6E1_U06369876
 */

#include <stdio.h>
#include <string.h>
#define LENGTH 129

size_t MyStrlen(const char *s1);

int main(void)
{
   char str_input[LENGTH];
   const char *p = &str_input[0];
   size_t str_len;
   /*This will prompt user for a string, and store it*/
   printf("Enter a string:\n");
   fgets(str_input, LENGTH, stdin);
   str_len = strlen(str_input) - 1;
   /*This will then remove the new line and replace with null character*/
   str_input[str_len] = '\0';
   /*This will print the length of string by using santdard library strlen*/
   printf("strlen(\"%s\") returned ", str_input);
   printf("%lu\n", (unsigned long)str_len);
   /*This wiull print length of string by user defined function*/
   printf("MyStrlen(\"%s\") returned ", str_input);
   printf("%lu\n", (unsigned long)MyStrlen(p));
   return 0;
}
