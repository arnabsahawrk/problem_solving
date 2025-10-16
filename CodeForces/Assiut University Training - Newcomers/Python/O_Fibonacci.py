N = int(input())

if N == 1:
    print(0)
elif N == 2:
    print(1)
else:
    def fib(prev, next, i):
        return prev+next if i == N else fib(next, prev+next, i+1)
    print(fib(0, 1, 3))
