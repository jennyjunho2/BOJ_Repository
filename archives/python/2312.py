import sys
input = sys.stdin.readline

def primes(num):
    sieve = [False, False] + [True] * (num - 1)
    for i in range(int(num**0.5) + 1):
        if sieve[i]:
            for j in range(2*i, num, i):
                sieve[j] = False
    return [idx for idx, i in enumerate(sieve) if i]

T = int(input())
for _ in range(T):
    N = int(input())
    result = []
    for i in primes(N):
        cnt = 0
        while N % i == 0:
            N //= i
            cnt += 1
        if cnt > 0:
            result.append((i, cnt))
    for j in result:
        print(" ".join(map(str, j)))