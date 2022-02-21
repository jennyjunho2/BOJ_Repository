import sys
input = sys.stdin.readline

sieve = [False, False] + [True] * (999999)
for i in range(2, int(100001*0.5) + 1):
    if sieve[i]:
        for j in range(2*i, 1000001, i):
            sieve[j] = False

while True:
    n = int(input())
    if n == 0:
        break
    for i in range(3, 1000001):
        if sieve[i] and sieve[n-i]:
            print(f"{n} = {i} + {n-i}")
            break