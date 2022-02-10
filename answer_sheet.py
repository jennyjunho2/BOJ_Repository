import sys
input = sys.stdin.readline

def primes(num):
    sieve = [False, False] + [True] * (num - 1)
    for i in range(2, int(num**0.5) + 1):
        if sieve[i]:
            for j in range(2*i, num, i):
                sieve[j] = False
    return list(filter(lambda x : x % 2 != 0, [idx for idx, x in enumerate(sieve) if x]))

while True:
    n = int(input())
    if n == 0:
        break
    prime = primes(n)
    for b in prime:
        if n - b in prime:
            print(f"{n} = {b} + {n-b}")
            break