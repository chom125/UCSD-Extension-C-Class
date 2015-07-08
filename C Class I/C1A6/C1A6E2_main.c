/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell
 *4/21/15
 *C1A6E2_main.c
 *Win7
 *Visual C++ 11.0
 *
 *This will ask for two strings, and compare them lexicographically
 *It will first use the standard library function strcmp
 *It will then use a user defined function to do the same
 *Email title: C1A6E2_U06369876
 */
#include <stdio.h>
#include <string.h>
#define LINE_SIZE 128

int MyStrcmp(const char *s1, const char *s2);
int main(void)
{
    char str1[LINE_SIZE];
    char str2[LINE_SIZE];
    //This will ask for input, store it, and removal new line
    printf("Input a string please\n");
    fgets(str1, LINE_SIZE, stdin);
    str1[strlen(str1) - 1] = '\0';
    //Repeats above process for second variable
    printf("Input a second string please\n");
    fgets(str2, LINE_SIZE, stdin);
    str2[strlen(str2) - 1] = '\0';
    //Prints what is being returned by library strcmp function
    printf("strcmp(\"");
    printf(str1);
    printf("\", \"");
    printf(str2);
    printf("\") returned ");
    printf("%d\n", strcmp(str1, str2));
    //The below does the same, but with user defined function
    printf("MyStrcmp(\"");
    printf(str1);
    printf("\", \"");
    printf(str2);
    printf("\") returned ");
    printf("%d\n", MyStrcmp(str1, str2));
    return 0;
}
