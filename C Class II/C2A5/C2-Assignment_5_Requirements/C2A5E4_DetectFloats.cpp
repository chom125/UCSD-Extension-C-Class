//
//  C2A5E4_DetectFloats.cpp
//  Class Test
//
//  Created by Craig Ricker on 8/4/15.
//  Copyright (c) 2015 Jortssports. All rights reserved.
//

#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <cstring>
using namespace std;

#include "C2A5E4_StatusCode-Driver.h"

StatusCode DetectFloats(const char *chPtr)
{
   enum States{
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

   for (int inChar;; chPtr++)
   {
      inChar = (int)*chPtr;
      switch (state) {
         case START:
            switch (inChar) {
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
         case WHOLE:
            switch (inChar){
               case 'E':
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
         case NOTWHOLE:
            switch (inChar){
               case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8':
               case '9':
                  state = FRACTIONAL;
                  break;
               default:
                  return NOTFLOATING;
            }
            break;
         case EXPONENT:
            switch(inChar){
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
         case FRACTIONAL:
            switch(inChar){
               case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8':
               case '9':
                  state = FRACTIONAL;
                  break;
               case '\0':
                  return TYPE_DOUBLE;
               case 'L':
                  state = LONGSTEP;
                  break;
               case 'F':
                  state = FLOATSTEP;
                  break;
               case 'E':
                  state = EXPONENT;
                  break;
               default:
                  return NOTFLOATING;
            }
            break;
         case EXPONENTSIGN:
            switch(inChar){
               case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8':
               case '9':
                  state = POSTEXPONENT;
                  break;
               default:
                  return NOTFLOATING;
            }
            break;
         case POSTEXPONENT:
            switch(inChar){
               case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8':
               case '9':
                  state = POSTEXPONENT;
                  break;
               case 'F':
                  state = FLOATSTEP;
                  break;
               case 'L':
                  state = LONGSTEP;
                  break;
               case '\0':
                  return TYPE_DOUBLE;
               default:
                  return NOTFLOATING;
            }
            break;
         case FLOATSTEP:
            switch(inChar){
               case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8':
               case '9':
                  state = FLOATSTEP;
                  break;
               case '\0':
                  return TYPE_FLOAT;
               default:
                  return NOTFLOATING;
            }
            break;
         case LONGSTEP:
            switch(inChar){
               case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8':
               case '9':
                  state = LONGSTEP;
                  break;
               case '\0':
                  return TYPE_LDOUBLE;
               default:
                  return NOTFLOATING;
            }
            break;
      }
   }
}
