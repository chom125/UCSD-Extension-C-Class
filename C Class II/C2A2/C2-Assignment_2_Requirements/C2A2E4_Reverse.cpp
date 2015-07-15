/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *7/1/15
 *C2A2E4_Reverse.cpp
 *Win7
 *Visual C++ 11.0
 *
 *
 *Email title: C2A2E4_U06369876
 *Uses recursion to reverse words split by white space
 */
#include <fstream>
#include <iostream>
using namespace std;
const int LEVELCHANGE = 1;
inline bool charCheck(int curChar)
{
   //A simple inline function which will determine if curChar is a separator
   if (isspace(curChar))
      //If space, as defined by isspace, returns true
      return true;
   else if (curChar == '.' || curChar == '?' || curChar == '!' || curChar == ','
             || curChar == ':' || curChar == ';' || curChar == EOF)
      //Checks if one of the other assignment specified separators
      return true;
   else
      return false;
}
int Reverse(ifstream &inFile, const int level)
{
   //Uses recursion to reverse a single word
   int thisChar = inFile.get();
   int thisSep;
   //If whitespace, returns and cancels recursion
   if (charCheck(thisChar))
   {
      //If thisChar is whitespace, enters here
      return(thisChar);
   }
   //If non white space, goes one level deeper
   else
   {
      thisSep = Reverse(inFile, level + LEVELCHANGE);
   }
   //Only reached when end of recursion reached.  If level = 1, capitalizes it
   if (level == 1)
      cout << char(toupper(thisChar));
   else
      cout << char(tolower(thisChar));
   return thisSep;
}
