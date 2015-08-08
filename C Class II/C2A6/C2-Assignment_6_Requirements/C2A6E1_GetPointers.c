/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *8/8/15
 *C2A6E1_GetPointers.c
 *Win7
 *Visual C++ 11.0
 *
 *Set function points to put and printf
 *Email title: C2A6E1_U06369876
 */
#include <stdio.h>

int (*GetPrintfPointer(void))(const char *format, ...)
{
   //Sets a function pointer to point at stdio printf
   int (*pPrintf)(const char *format, ...) = printf;
   return pPrintf;
}

int (*GetPutsPointer(void))(const char *str)
{
   //points pPuts to library function puts
   int (*pPuts)(const char *str) = puts;
   return pPuts;
}
