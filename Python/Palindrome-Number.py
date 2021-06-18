# Question : To check if the given number is palindrome or not  
#        Input : User input a number
#        Output : -

n=int(input("Enter the number to check : "))
x=n
rev=0
while(n>0):
    rev=(rev*10)+n%10
    n=n//10
if(rev==x):
    print(" Given number is palindrome. ")
else:
    print(" Given number is not palindrome. ")

