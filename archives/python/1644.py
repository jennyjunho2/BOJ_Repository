# 반례가 뭐가 있을까?

import sys
input = sys.stdin.readline

from itertools import accumulate
def primes(num):
    sieve = [False, False] + [True] * (num - 1)
    for i in range(2, int(num**0.5) + 1):
        if sieve[i]:
            for j in range(2*i, num+1, i):
                sieve[j] = False
    return [idx for idx, x in enumerate(sieve) if x]

N = int(input())
if N == 1:
    print(0)
    exit()

partials = [0] + list(accumulate(primes(N)))
if len(partials) == 2: # N == 2
    if partials[1] == N:
        print(1)
        exit()
    else:
        print(0)
        exit()

ptr1, ptr2 = 1, 2
cnt = 0
while ptr2 < len(partials):
    partial_sum = partials[ptr2] - partials[ptr1 - 1]
    if partial_sum < N:
        ptr2 += 1
    elif partial_sum > N:
        ptr1 += 1
    else:
        cnt += 1
        ptr1 += 1
        ptr2 += 1
print(cnt)