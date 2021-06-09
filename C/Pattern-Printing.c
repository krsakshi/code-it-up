/*
Question : Write a program to print the following pattern.

        *
        **
        ***
        ****
        *****

        Input : -
        Output : Given pattern

*/

#include<stdio.h>
int main() 
{
   int i, j, k;
   printf("Enter the number of rows: ");
   scanf("%d", &k);
   for (i = 1; i <= k; ++i) 
   {
      for (j = 1; j <= i; ++j) 
      {
         printf("*");
      }
      printf("\n");
   }
   return 0;
}


