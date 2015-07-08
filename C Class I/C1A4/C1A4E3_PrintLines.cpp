/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell *4/21/15
 *C1A4E3_PrintLines.cpp
 *Win7
 *Visual C++ 11.0
 *
 *This wil explore functions and their default values
 */
#include <iostream>
using namespace std;

void PrintLines(int usr_char, int charnumb, int linenumb)
{
   while (linenumb > 0)          //Keeps track of the number of lines
   {
      //Keeps tracks of the number of characters, makes copy
      //due to the fact it is accessed multiple times
      for (int charnumb_copy = charnumb; charnumb_copy > 0; --charnumb_copy)
      {
         cout << char(usr_char);
      }
      cout << "\n";
      --linenumb;
   }
}
