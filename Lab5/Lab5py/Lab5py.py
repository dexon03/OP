a = int(input())
b = int(input())

for i in range(a,b+1):
    fib1 = 0
    fib2 = 1
    fib_digit = fib2
    print(i,end = ':' )
    while fib_digit <= i:
        if i%fib_digit == 0:
            print(fib_digit, end = ' ')
        fib1 = fib2
        fib2 = fib_digit
        fib_digit = fib1 + fib2
    print('\n')


