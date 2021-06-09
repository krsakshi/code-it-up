
# Question : Given a number find all the factors of that number.
#          Input : User input a number
#          Output : A list of factors of that number

num=int(input("Enter a number to find factors : "))
l=[]

def factors(x):
    print("The factors of",x,"are :")
    for i in range(1,x+1):
        if x % i == 0:
            l.append(i)
    print(l) 

factors(num)
