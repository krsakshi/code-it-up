#  Question :  To program table of any digit 
#        Input : User input a number
#         Output : Table of that number 
 
n=int (input("Enter number  :"))
i=int (input("Enter max multiplacation digit :"))
x=1
while(x<=i):
    print("\n Table :",n," x ",x," = ",n*x)
    x=x+1