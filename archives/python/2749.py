#피사노 주기

M = 1000000
P = int(15 * (M/10))
fib = [0, 1] + [0]*(P-2)

N = int(input())
for i in range(2, P):
    fib[i] = (fib[i-1]+fib[i-2])
    fib[i] %= M
print(fib[N%P])