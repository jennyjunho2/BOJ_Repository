def fib(n):
    f = [0, 1]
    for _ in range(2, n+1, 2):
        f[0] += f[1]
        f[1] += f[0]
    return f[n%2]

N = int(input())
print(fib(N))