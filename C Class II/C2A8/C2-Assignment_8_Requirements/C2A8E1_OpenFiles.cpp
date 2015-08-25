/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *8/8/15
 *C2A8E1_OpenFiles.cpp
 *Win7
 *Visual C++ 11.0
 *
 *This will read a file in binary mode, and print out hex representations of the data
 *Email title: C2A8E1_U06369876
 */
#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;





ifstream *OpenFiles(char * const fileNames[], size_t count)
{
   string buffer;
   //Check if an empty array was sent
   if (count == 0)
   {
      cerr << "No files input\n";
      exit(EXIT_FAILURE);
   }
   //Allocate space for ifstream array
    ifstream *head;
    head = new ifstream[count];
    for (int i = 0; i < count; i++)
    {
      //Open each file individually/safely in read only text mode
      // openedFiles = new ifstream;
      head[i].open(fileNames[i]);
      if (!head[i].is_open()) {
         //If unable to open, exits and prints error
         cerr << "Couldn't open file " << fileNames[i] << "\n";
         exit(EXIT_FAILURE);
      }
   }
   return head;
}