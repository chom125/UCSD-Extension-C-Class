/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell *4/21/15
 *C1A2E1_main.cpp
 *Win7
 *Visual C++ 11.0
 *
 *This will help us explore taking in userinput
 *as well as explore typecasting
 *When the user enters anything that is not an uppercase character
 *The code is set up to offset the ANSII Integer value by the number
 *required to go from the upper case to lower case.  This value is still applied
 *But the index is wrong, and it adjusts by CHAR_DIF still
 *
 *When whitespace is entered before the character, the ASII integer
 *Is saved as "usr_input" instead of the desired character, this is due to the 
 *Implementation of "cin.get()"  It takes the first character, even if it is whitespace
 */
#include <iostream>
using namespace std;

const char CHAR_DIF = 'a' - 'A';

int main()
{
   char usr_input;

   cout << "Please enter a single character: ";
   cin.get(usr_input);
   cout << "The lowercase equivalent of '" << usr_input << "' is '" << char(usr_input + CHAR_DIF) << "'\n";

   return 0;
}
