/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell
 *4/21/15
 *C1A6E1_MyStrlen.c
 *Win7
 *Visual C++ 11.0
 *
 *This calculates the length of a string calculated by pointer subtraction
 *it is then returned
 *Email title: C1A6E1_U06369876
 */

#include <stdio.h>


size_t MyStrlen(const char *s1)
{
    /*This will calculate string length*/
    const char *s2 = s1;
    while (*s2)
        ++s2;
    /*This typecasts the return to size_t*/
    return (size_t)(s2 - s1);
}
