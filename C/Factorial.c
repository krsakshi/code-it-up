/*Question : To find factorial of a given number 
       Input : User input a number
       Output : Factorial of given number*/
#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("enter the number : ");
    scanf("%d",&n);
    while(n>=1)
        {
            fact=fact*n;
            n=n-1;
        }
        printf("FACTORIAL = %d\n",fact);
    return 0;
}