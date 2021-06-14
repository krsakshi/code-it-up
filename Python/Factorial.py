#Question : To find factorial of a given number 
#        Input : User input a number
#        Output : Factorial of given number

n=int(input("enter the number : "))
fact=1
while(n>=1):
    fact=fact*n
    n=n-1
print("FACTORIAL = ",fact,end='\n')