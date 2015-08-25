/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *8/8/15
 *C2A8E1_OpenFiles.cpp
 *Win7
 *Visual C++ 11.0
 *
 *Will create an array of open ifstream objects
 *Email title: C2A8E1_U06369876
 */
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

ifstream *OpenFiles(char * const fileNames[], size_t count)
{
   //Check if an empty array was sent
   if (count == 0)
   {
      cerr << "No files input\n";
      exit(EXIT_FAILURE);
   }
   //Allocate space for ifstream array
   ifstream *head;
   if ((head = new (nothrow) ifstream[count]) == NULL)
   {
      //Check if allocation successful
      cerr << "Couldn't allocate memory, closing\n";
      exit(EXIT_FAILURE);
   }
   for (size_t actFile = 0; actFile < count; actFile++)
   {
      //Open each file individually/safely in read only text mode
      head[actFile].open(fileNames[actFile]);
      if (!head[actFile].is_open())
      {
         //If unable to open, exits and prints error
         cerr << "Couldn't open file " << fileNames[actFile] << "\n";
         delete[] head;
         exit(EXIT_FAILURE);
      }
   }
   return head;
}
