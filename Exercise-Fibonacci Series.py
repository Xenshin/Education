def fib(n):
    first = 0
    second = 1

    if n < 1:
        return -1
    if n == 1:
        return first
    if n == 2:
        return second

    count = 3 # starting from 3 because we already know the first two values
    while count <= n:
        fib_n = first + second
        first = second
        second = fib_n
        count += 1 # increment count in each iteration
    return fib_n

n = 7
print(fib(n))
        