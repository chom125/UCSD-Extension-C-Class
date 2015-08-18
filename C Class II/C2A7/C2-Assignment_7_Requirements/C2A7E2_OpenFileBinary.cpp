/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *8/8/15
 *C2A7E2_OpenFileBinary.cpp
 *Win7
 *Visual C++ 11.0
 *
 *Opens file into binary reading mode
 *Email title: C2A7E2_U06369876
 */
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

void OpenFileBinary(const char *fileName, ifstream &inFile)
{
   //Safely opens fileName into inFile
   inFile.open(fileName, ios_base::in | ios_base::binary);
   if (!inFile.is_open()) {
      //If unable to open, exits and prints error
      cerr  << "Couldn't open file " << fileName << "\n";
      exit(EXIT_FAILURE);
   }
}
