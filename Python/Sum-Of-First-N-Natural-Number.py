#Question : To print sum of first  N natural numbers
#       Input : User input a number
#       Output : Sun of the numbers 

n=int(input("enter the number : "))
i=1
sum=0
while(i<=n):
    sum=sum+i
    i+=1
print("Sum =",sum ,end='\n')