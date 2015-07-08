/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell
 *4/21/15
 *C1A3E1_main.c
 *Win7
 *Visual C++ 11.0
 *
 *We must display justified factorials up to a user input non zero integer
 */
#include <stdio.h>


int main(void)
{
   int usr_input, fact_index;
   long fact_result;
   fact_result = 1;                                                    

   printf("Intput an integer greater than zero please:\n");             
   scanf("%d", &usr_input);
   printf("nbr         nbr!\n----------------\n");         /*requests input, saves into usr_input variable*/

   for (fact_index = 1; fact_index <= usr_input; ++fact_index)
   {
      fact_result *= fact_index;
      printf("%2d%13ld\n", fact_index, fact_result);       /*prints current integer, and its factorial*/

   }

   return 0;
}
