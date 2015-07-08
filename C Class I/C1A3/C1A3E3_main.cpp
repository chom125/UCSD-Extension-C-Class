/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell *4/21/15
 *C1A3E3_main.cpp
 *Win7
 *Visual C++ 11.0
 *
 *To reverse the text of a user input text
 *This will allow us to explore flow control more
 *especially switch, which I have never used
 */
#include <iostream>
using namespace std;
const int BASE = 10;


int main()
{
   int usr_input;


   cout << "Please enter an integer: ";
   cin >> usr_input;                         //Asks for an integer and stores it
   cout << "\"" << usr_input << "\" in words is \"";

   if (usr_input < 0)
   {
      usr_input = -usr_input;
      cout << "minus ";                      //Checks if neg int and negates it
   }

   int divisor = 1;
   int  dividend = usr_input;

   while (dividend > BASE - 1)               //Proud I thought to avoid magic numbers
   {
      divisor *= BASE;
      dividend /= BASE;
   }
   while (divisor > 0)                       //While divisor isn't zero, still digits left
   {
      int msd = usr_input / divisor;
      cout << " ";
      switch (msd)
      {
         case 0:
            cout << "zero";
            break;
         case 1:
            cout << "one";
            break;
         case 2:
            cout << "two";
            break;
         case 3:
            cout << "three";
            break;
         case 4:
            cout << "four";
            break;
         case 5:
            cout << "five";
            break;
         case 6:
            cout << "six";
            break;
         case 7:
            cout << "seven";
            break;
         case 8:
            cout << "eight";
            break;
         case 9:
            cout << "nine";
            break;
      }
      usr_input = usr_input - msd * divisor; 
      divisor /= BASE;
   }
   
   cout << "\"\n";

   return 0;
}
