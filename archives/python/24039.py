import sys
input = sys.stdin.readline

sieve = [False, False] + [True] * 130
for i in range(2, int(131**0.5) + 1):
    if sieve[i]:
        for j in range(i**2, 131, i):
            sieve[j] = False
primes = [idx for idx, x in enumerate(sieve) if x]
special_nums = [primes[i] * primes[i+1] for i in range(len(primes) - 1)]
N = int(input())
for i in range(len(special_nums)):
    if special_nums[i] > N:
        print(special_nums[i])
        break