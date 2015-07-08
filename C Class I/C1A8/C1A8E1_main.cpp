/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell
 *6/4/15
 *C1A8E1_main.cpp
 *Win7
 *Visual C++ 11.0
 *This is an exploration of C++ classes
 *This main file will just initialize a SavingsAccount and use all created functions
 *email title: C1A8E1_U06369876
 */

#include <iostream>
#include "C1A8E1_SavingsAccount.h"
using namespace std;
int main()
{
   //This uses the SavingsAccount class from the other files
   SavingsAccount poor_college_student;
   poor_college_student.GetInitialValues();
   poor_college_student.DisplayValues();
   cout << "Account closure penalty is: " << poor_college_student.CalculatePenalty() << "\n";
   return(0);
}
