import sys
input = sys.stdin.readline

# K = fib(D-2)a + fib(D-1)b
D, K = map(int, input().split())
fib = [0] * 31
fib[1], fib[2] = 1, 1
for i in range(3, D+1):
    fib[i] = fib[i-1] + fib[i-2]

a = 1
while True:
    if ((K - fib[D-2] * a) % fib[D-1]) == 0:
        b = (K - fib[D-2] * a) // fib[D-1]
        break
    else:
        a += 1
print(a)
print(b)