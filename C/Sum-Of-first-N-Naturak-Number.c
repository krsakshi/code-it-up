/*Question : To print sum of first  N natural numbers
       Input : User input a number
       Output : Sun of the numbers */
#include<stdio.h>
int main()
{
    int n ,i=1, sum=0;
    printf("enter the number : ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i+=1;
    }
    printf("Sum =%d\n",sum);
    return 0;
}