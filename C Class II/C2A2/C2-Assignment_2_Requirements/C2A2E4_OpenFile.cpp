/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *7/1/15
 *C2A2E4_OpenFile.cpp
 *Win7
 *Visual C++ 11.0
 *
 *
 *Email title: C2A2E4_U06369876
 *Opens the file to be fed into Reverse
 */
#include <fstream>
#include <cstdlib>
#include <iostream>
using namespace std;
void OpenFile(const char *fileName, ifstream &inFile)
{
   //Opens filName into ifstream inFile
   inFile.open(fileName);
   if (!inFile.is_open())
   {
      //If file not able to be opened, terminates program
      cerr << "The file could not be opened, existing\n";
      exit(EXIT_FAILURE);
   }
}
