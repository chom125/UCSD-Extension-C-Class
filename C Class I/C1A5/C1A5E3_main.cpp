/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell
 *4/21/15
 *C1A5E3_main.cpp
 *Win7
 *Visual C++ 11.0
 *
 *This program will prompt the user to input two doubles
 *These will then be passed to functions in other files as pointers to constant doubles
 *To compute the max and the min
 *These functions will return pointers to doubles
 */

#include <iostream>
#include <cstdlib>
using namespace std;

//Prototype of functions from other files
double *ComputeMinimum(const double *val1, const double *val2);
double *ComputeMaximum(const double *val1, const double *val2);

int main()
{
   //This will prompt the user ti input two values, and store them
   double usr_input1;
   double usr_input2;
   cout << "Please input two space separated decimal numeric values\n";
   cin >> usr_input1;
   cin >> usr_input2;
   //This will then compute the minimum, return and print
   cout << "ComputeMinimum(&" << usr_input1;
   cout << ", &" << usr_input2 << ") returned &";
   cout << *ComputeMinimum(&usr_input1, &usr_input2) << "\n";
   //This will then compute the maximum, return and print.
   cout << "ComputeMaximum(&" << usr_input1;
   cout << ", &" << usr_input2 << ") returned &";
   cout << *ComputeMaximum(&usr_input1, &usr_input2) << "\n";
   return(EXIT_SUCCESS);
}
