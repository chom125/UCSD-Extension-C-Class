/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell *4/21/15
 *C1A4E2_main.cpp
 *Win7
 *Visual C++ 11.0
 *
 *This wil explore function over loading and functions
 */
#include <iostream>
#include <cstdlib>
using namespace std;
const int N_REPEATS = 5;
void PrintLines();
void PrintLines(int usr_char);
void PrintLines(int usr_char, int charnumb);
void PrintLines(int usr_char, int charnumb, int linenumb);

int main()
{
   for (int count = 0; count < N_REPEATS; count++)
   {
      char chardis;
      int numbc, numblin;
      cout << "Hello";
      cout << "Enter in the following order: char, an int (# of times repeated)";
      cout << ", another integer, which controls the #of lines\n";
      cin >> chardis;
      cin >> numbc;
      cin >> numblin;
      PrintLines();                           //Overload, goes to the fxn with no input
      PrintLines(int(chardis));               //Overload, goes to int fxn
      PrintLines(int(chardis), int(numbc));   //Overload, goes to int, int fxn
      PrintLines(chardis, numbc, numblin);    //Overload, int int int fxn
   }
   return(EXIT_SUCCESS);
}
