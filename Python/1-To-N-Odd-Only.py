#Question : To print odd numbers from 1 to N
#        Input : User input a number
#       Output : Odd natural numbers

n=int(input("enter the number : "))
i=1
while(i<=n):
    if(i%2!=0):
        print(i,end='\n')
    i=i+1
