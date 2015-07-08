/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell *4/21/15
 *C1A3E2_main.cpp
 *Win7
 *Visual C++ 11.0
 *
 *This will allow us to practice on function flow
 *We need to output the reverse order of a user input integer
 */
#include <iostream>
using namespace std;
const int BASE = 10;


int main()
{
   int usr_int;

   cout << "Please enter an integer: ";
   cin >> usr_int;
   cout << "\"" << usr_int << "\" in reverse is \"";

   bool neg_check = usr_int < 0;
   if (neg_check)
   {
      usr_int = -usr_int;                //Negates the numbef if negative
   }
    
   cout << usr_int % BASE;               //Allows code to run if zero is entered
   usr_int /=  BASE;

   while (usr_int > 0)                 
   {
      cout << usr_int % BASE;            //calculates lowest sig digit and prints it
      usr_int /= BASE;
   }

   if (neg_check)
   {
      cout << "-";                       //places negative sign if needed
   }
   cout << "\"\n";
   return 0;
}
