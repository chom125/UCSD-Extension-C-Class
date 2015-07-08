/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell *4/21/15
 *C1A2E3_main.cpp
 *Win7
 *Visual C++ 11.0
 *
 *This is  to demonstrate the ability to use "for loops"
 *as well as nesting them, and indexing
 *not sure how we were supposed to do this...but if statements worked for me
 */
#include <iostream>

using namespace std;

const char LEADER_CHAR = '.';
const char DIAGONAL_CHAR = '%';

int main()
{
   int usr_input;

   cout << "Input an integer:\n";
   cin >> usr_input;

   for (int row = 0; row < usr_input; ++row)                   //this will control what row it is on
   {
      for (int column = 0; column < usr_input; ++column)       //This will control the column
      {
         if (column < row)                                     //*This limits how many . are printed
         {
            cout << LEADER_CHAR;
         }
         else
         {
            break;                                             //This breaks the column for loop, efficient
         }
      }
      cout << DIAGONAL_CHAR << "\n";                           //This prints out the % and creates a new line
   }
   return 0;
}
