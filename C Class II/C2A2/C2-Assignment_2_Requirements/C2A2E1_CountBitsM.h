/*
 *Craig Ricker, U06369876 
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *7/1/15
 *C2A2E1_CountBitsM.h
 *Win7
 *Visual C++ 11.0
 *
 *This file will calculate the bits used to represent the input datatype
 *Email title: C2A2E1_U06369876
 */

#ifndef C2A2E1_COUNTBITSM_H
#define C2A2E1_COUNTBITSM_H
#include <limits.h>

//This will calculate number of bits used to store objectOrType
#define CountBitsM(objectOrType) ((int) (sizeof(objectOrType)*CHAR_BIT))

#endif
