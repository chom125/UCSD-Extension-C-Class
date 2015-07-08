/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell
 *4/21/15
 *C1A6E3_GetSubstring.c
 *Win7
 *Visual C++ 11.0
 *
 *This file will return a substring of the test using an array pointer as input
 *This will allow us to explore string manipulation
 *Email title: C1A6E3_U06369876
 */


char *GetSubstring(const char source[], int start, int count, char result[])
{
   char *p1 = result;
   //This loop will slide the pointer to the start index
   while (start > 0)
   {
      if (*source == '\0')
      {
         *result = '\0';
         return p1;
      }
      start--;
      source++;
   }
   //This loop will store the characters contained within source, to result
   //It will begin at the pointer from last loop, terminate at end or when count ends
   while (count > 0)
   {
      //This case is for when the end of source is reached, adds null char to the array and breaks
      if (*source == '\0')
      {
         *result = '\0';
         break;
      }
      //This sets the pointer of result to point at the same value as source...copying it
      *result++ = *source++;
      count--;
   }
   //This is only reached if the count is reached before the end of source.  Result needs null char
   *result = '\0';
   return p1;
}
