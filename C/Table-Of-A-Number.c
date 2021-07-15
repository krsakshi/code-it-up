/* Question :  To program table of any digit 
       Input : User input a number
         Output : Table of that number */
#include <stdio.h>
int main()
{
    int n,i,x=1;
    printf("Enter number  :");
    scanf("%d",&n);
    printf("Enter max multiplacation digit :");
    scanf("%d",&i);
    while(x<=i)
        {
            printf("\n Table :%d x %d = %d ",n,x,n*x);
            x=x+1;
        }
    return 0;
}