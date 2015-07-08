/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell
 *6/4/15
 *C1A8E1_SavingsAccount.h
 *Win7
 *Visual C++ 11.0
 *
 *This is a header file which will contain class SavingsAccount
 *In header so it can be easily included in all needed files
 */
#ifndef C1A8E1_SAVINGSACCOUNT_H
#define C1A8E1_SAVINGSACCOUNT_H
#define PERCENT_CONV .01
#include <string>

class SavingsAccount      // Do not change the order of this classs members
{
private:
   int accountType;
   std::string ownerName; // You must handle the case where the name contains whitespace
   long IDnbr;
   double accountBalance, accountClosurePenaltyPercent;
public:
   void GetInitialValues(void);
   void DisplayValues() const;
   double CalculatePenalty() const 
   { 
      return(accountBalance *  accountClosurePenaltyPercent * PERCENT_CONV); 
   }
};
#endif
