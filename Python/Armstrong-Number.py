#  Question : To check wether a number is armstrong or not 
#        Input : User input a number
#         Output :-

n=int(input("Enter the number to check : "))
sum=0
x=n
while(x>0):
    sum=sum+(x%10)**3
    x=x//10
if(n==sum):
    print(" Given number is Armstrong. ")
else:
    print(" Given number is not Armstrong. ")