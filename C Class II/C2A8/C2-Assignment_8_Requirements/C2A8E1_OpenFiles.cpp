/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *8/8/15
 *C2A7E2_ListHex.cpp
 *Win7
 *Visual C++ 11.0
 *
 *This will read a file in binary mode, and print out hex representations of the data
 *Email title: C2A7E2_U06369876
 */
#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

void *SafeMalloc(size_t size)
{
   void *vp;

   if ((vp = malloc(size)) == NULL)
   {
      fputs("Out of memory\n", stderr);
      exit(EXIT_FAILURE);
   }
   return(vp);
}

//ifstream *OpenFiles(char * const fileNames[], size_t count)
//{
//   string buffer;
//   ifstream *returnPoint = (ifstream *) SafeMalloc(sizeof(ifstream *) * count);
////   for (; *fileNames; ++fileNames) {
////      ifstream fIn(*fileNames);
////   }
//   ifstream fIn(*fileNames);
//   getline(fIn, buffer);
//   return returnPoint;
//}

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
   ifstream *head = (ifstream *)SafeMalloc(count * sizeof(ifstream));
   for (ifstream *openedFiles = head; *fileNames; ++fileNames, ++openedFiles)
   {
      //Open each file individually/safely in read only text mode
      cout << *fileNames << '\n';
      //ifstream inFile(*fileNames);
      openedFiles->open(*fileNames);
      if (openedFiles->is_open()) {
         //If unable to open, exits and prints error
         cerr << "Couldn't open file " << *fileNames << "\n";
         //free openedFiles
         free(openedFiles);
         exit(EXIT_FAILURE);
      }
   }
   return head;
}