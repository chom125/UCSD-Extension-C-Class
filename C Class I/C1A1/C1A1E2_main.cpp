/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell *4/21/15
 *C1A1E2_main.cpp
 *Win7
 *Visual C++ 11.0
 *
 *This program will output numbers in three formats: decimal, octal, and hexadecimal
 *We are only allowed to use cout twice, and use cin to store the input value
 */
#include <iostream>

int main()
{
   int user_int;
   std::cout << "Enter any decimal integer numeric value:\n"; 
   std::cin >> user_int;                                        //stores user input as an integer
   std::cout << user_int << " decimal = "                       //outputs it in normal decimal format
      << std::oct << user_int << " octal = "                    //outputs in octal
      << std::hex << user_int << " hexadecimal";                //outputs in hexadecimal
   return 0;
}
