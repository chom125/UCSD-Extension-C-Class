/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *8/4/15
 *C2A5E4_OpenFile.cpp
 *Win7
 *Visual C++ 11.0
 *
 *Making a state machine from our diagram built in E3
 *Email title: C2A5E4_U06369876
 */
#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;

void OpenFile(const char *fileName, ifstream &inFile)
{
   //Will attempt to open fileName into inFile
   inFile.open(fileName);
   if (!inFile.is_open())
   {
      //If it fails, exits program
      cerr << "Couldn't open file " << fileName << '\n';
      exit(EXIT_FAILURE);
   }
}
