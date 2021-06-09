
// Question : Given a number find all the factors of that number.
//          Input : User input a number
//          Output : Factors of that number

#include <stdio.h>
int main() 
{
    int i,num;
    printf("\nEnter a Number to find factors : ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; ++i) 
    {
        if (num % i == 0) 
        {
            printf("%d ", i);
        }
    }

   printf("\n");
   return 0;
}
