#  Question : To print even numbers from 1 to N
#        Input : User input a number
#         Output : Even natural numbers

n=int(input("enter the number : "))
i=2
while(i<=n):
    if(i%2==0):
        print(i,end='\n')
    i=i+1
