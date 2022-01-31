import sys
input = sys.stdin.readline

N, K = map(int, input().split())
primes = [False, False] + [True] * (N-1)
cnt = 0
break_all = False
for i in range(2, N+1):
    for j in range(i, N+1, i):
        if primes[j]:
            primes[j] = False
            cnt += 1
            if cnt == K:
                print(j)
                break