# Question : To reverse a given number 
#        Input : User input a number
#        Output : Reverse of the given number

n=int(input("Enter the number to reverse : "))
rev=0
while(n>0):
    rev=(rev*10)+n%10
    n=n//10
print("Rverse  of the given number is : " ,rev)