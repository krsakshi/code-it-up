/* Question : To print numbers from 1 to N
      Input : User input a number
     Output : Natural numbers  */
#include <stdio.h>
int main()
{
    int n, i=1;
    printf("Enter the value : ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d \n",i);
        i=i+1;
    }
    return 0;
}