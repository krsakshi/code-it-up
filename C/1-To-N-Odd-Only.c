/*     Question : To print odd numbers from 1 to N
       Input : User input a number
       Output : Odd natural numbers */
#include <stdio.h>
int main()
{
    int n, i=1;
    printf("Enter the value : ");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2!=0)
            printf("%d ",i);
        i=i+1;
    }
    return 0;
}


