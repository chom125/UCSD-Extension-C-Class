/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *8/4/15
 *C2A5E4_DetectFloats.cpp
 *Win7
 *Visual C++ 11.0
 *
 *Making a state machine from our diagram built in E3
 *Email title: C2A5E4_U06369876
 */

#include <fstream>
using namespace std;

#include "C2A5E4_StatusCode-Driver.h"

StatusCode DetectFloats(const char *chPtr)
{
   //The various states that exist, and that need to be dealt with
   enum States {
      START,
      WHOLE,
      NOTWHOLE,
      EXPONENT,
      FRACTIONAL,
      EXPONENTSIGN,
      POSTEXPONENT,
      FLOATSTEP,
      LONGSTEP
   } state  = START;
   //Limit inChar to the scope of the for loop
   for (;; chPtr++) {
      switch (state) {
         //Start is the entry point, should never return
         case START:
            switch (*chPtr) {
               case '.':
                  state = NOTWHOLE;
                  break;
               case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8':
               case '9':
                  state = WHOLE;
                  break;
               default:
                  return NOTFLOATING;
            }
            break;
         //Whole is a whole number
         case WHOLE:
            switch (*chPtr) {
               case 'E': case 'e':
                  state = EXPONENT;
                  break;
               case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8':
               case '9':
                  state = WHOLE;
                  break;
               case '.':
                  state = FRACTIONAL;
                  break;
               default:
                  return NOTFLOATING;         
            }
            break;
         //Not whole begins with a period
         case NOTWHOLE:
            switch (*chPtr) {
               case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8':
               case '9':
                  state = FRACTIONAL;
                  break;
               default:
                  return NOTFLOATING;
            }
            break;
         //Exponent contains e or E
         case EXPONENT:
            switch (*chPtr) {
               case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8':
               case '9':
                  state = POSTEXPONENT;
                  break;
               case '+': case '-':
                  state = EXPONENTSIGN;
                  break;
               default:
                  return NOTFLOATING;
            }
            break;
         //Fractional has a period after an integer portion
         case FRACTIONAL:
            switch (*chPtr) {
               case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8':
               case '9':
                  state = FRACTIONAL;
                  break;
               case '\0':
                  return TYPE_DOUBLE;
               case 'L': case 'l':
                  state = LONGSTEP;
                  break;
               case 'F': case 'f':
                  state = FLOATSTEP;
                  break;
               case 'E': case 'e':
                  state = EXPONENT;
                  break;
               default:
                  return NOTFLOATING;
            }
            break;
         //Special case where an optional + or - follows E or e
         case EXPONENTSIGN:
            switch (*chPtr) {
               case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8':
               case '9':
                  state = POSTEXPONENT;
                  break;
               default:
                  return NOTFLOATING;
            }
            break;
         //Can't feed back into normal loop, or could get e6e6 or something similiar
         case POSTEXPONENT:
            switch (*chPtr) {
               case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8':
               case '9':
                  state = POSTEXPONENT;
                  break;
               case 'F': case 'f':
                  state = FLOATSTEP;
                  break;
               case 'L': case 'l':
                  state = LONGSTEP;
                  break;
               case '\0':
                  return TYPE_DOUBLE;
               default:
                  return NOTFLOATING;
            }
            break;
         //If F or f present, has to be last character or fail
         case FLOATSTEP:
            switch (*chPtr) {
               case '\0':
                  return TYPE_FLOAT;
               default:
                  return NOTFLOATING;
            }
         //If l present, has to be end, or fail
         case LONGSTEP:
            switch (*chPtr) {
               case '\0':
                  return TYPE_LDOUBLE;
               default:
                  return NOTFLOATING;
            }
      }
   }
}
