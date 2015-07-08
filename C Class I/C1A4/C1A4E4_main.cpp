/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell *4/21/15
 *C1A4E4_main.cpp
 *Win7
 *Visual C++ 11.0
 *
 *This wil explore function like macros and inline functions
 */
#include <iostream>
#include <cstdlib>
#include "C1A4E4_MaxOf.h"
using namespace std;

int main()
{
   double usr1, usr2, usr3;
   cout << "Ener any 3 space-separated deciimal numeric values onto the same line:\n";
   cin >> usr1;
   cin >> usr2;
   cin >> usr3;
   //This wil print what was ran, and output by mMaxOf3
   cout << "mMaxOf3(" << usr1 << "," << usr2 << "," << usr3;
   cout << ") returned " << mMaxOf3(usr1, usr2, usr3) << "\n";
   //This wil print what was ran, and output by fMaxOf3
   cout << "fMaxOf3(" << usr1 << "," << usr2 << "," << usr3;
   cout << ") returned " << fMaxOf3(usr1, usr2, usr3) << "\n";
   return(EXIT_SUCCESS);
}
