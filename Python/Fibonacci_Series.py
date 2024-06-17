def fibonacci(n):
    t1, t2 = 0, 1
    result = [t1, t2]

    for _ in range(2, n):
        next_term = t1 + t2
        result.append(next_term)
        t1, t2 = t2, next_term

    return result

def main():
    n = int(input("Enter the number of terms: "))
    if n <= 0:
        print("Please enter a positive integer.")
    else:
        fib_series = fibonacci(n)
        print("Fibonacci Series:", ', '.join(map(str, fib_series)))

if __name__ == "__main__":
    main()
