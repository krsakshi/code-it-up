/*Question : Tocheck wether the number is even or odd 
     Input : User input a number
       Output : natural numbers */
#include<stdio.h>
int main()
{
 int N;
    printf("Enter a number : ");
    scanf("%d",&N);
     if (N%2==0)
        printf("\n The entered number is Even.\n");
     else
        printf("\n The entered number is Odd.\n");
  return 0;
}

