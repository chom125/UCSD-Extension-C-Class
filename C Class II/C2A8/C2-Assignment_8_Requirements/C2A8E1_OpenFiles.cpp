/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *8/23/15
 *C2A8E1_OpenFiles.cpp
 *Win7
 *Visual C++ 11.0
 *
 *T
 *Email title: C2A8E1_U06369876
 */
#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

void *SafeMalloc(size_t size)
{
   //Safely allocate memory
   void *vp;
   if ((vp = malloc(size)) == NULL)
   {
      //If failure, output error and exit program
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
    ifstream *head;
    head = new ifstream[count];
    //= (ifstream *)SafeMalloc(count * sizeof(ifstream));
   //for (ifstream *openedFiles = head; fileNames < fileNames + count; ++fileNames, ++openedFiles)
    for (int i = 0; i < count; i++)
    {
      //Open each file individually/safely in read only text mode
      cout << fileNames[i] << '\n';
      // openedFiles = new ifstream;
      head[i].open(fileNames[i]);
      if (!head[i].is_open()) {
         //If unable to open, exits and prints error
         cerr << "Couldn't open file " << fileNames[i] << "\n";
         //free openedFiles
         //free(head[i]);
         exit(EXIT_FAILURE);
      }
   }
   return head;
}