/*Question : To check wether a person is eledgible to vote or not
        Input : User input age
        Output : Eledgible or Not Eledgible */
#include <stdio.h>
int main()
{
    int age;
    printf("Enter the Age :");
    scanf("%d",& age);
    if (age>=18)
        printf("Age %d is elegible to vote.",age);
    else
        printf("Age %d is  not elegible to vote.",age);
    return 0;
}
