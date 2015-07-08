/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell
 *6/4/15
 *C1A8E1_SavingsAccount.cpp
 *Win7
 *Visual C++ 11.0
 *
 *This includes the functions which SavingAccount has prototypes for
 *
 */

#include "C1A8E1_SavingsAccount.h"
#include <iostream>
#include <string>
using namespace std;
void SavingsAccount::GetInitialValues()
{
   //This prompts the user for all variables, and stores them
   cout << "Input the account type\n";
   cin >> accountType;
   cout << "Input the owner's name:\n";
   //This clears out the whitespace before reading in the string
   cin >> ws;
   getline(cin, ownerName);
   cout << "What is the ID number:\n";
   cin >> IDnbr;
   cout << "What is the account balance:\n";
   cin >> accountBalance;
   cout << "What is the account closure penalty percent:\n";
   cin >> accountClosurePenaltyPercent;
}

void SavingsAccount::DisplayValues() const
{
   //This is a const function, and will simply print the different values
   //Of a SavingsAccount variable.
   cout << "Account type is: "
      << accountType
      << "\nOwner name is: "
      << ownerName
      << "\nID number is: "
      << IDnbr
      << "\nAccount balance is: "
      << accountBalance
      << "\nAccount closure penalty percent is: "
      << accountClosurePenaltyPercent << "\n";
}
