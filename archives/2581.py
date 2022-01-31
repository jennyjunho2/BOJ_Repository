import sys
import math
input = sys.stdin.readline

def is_prime(num):
    for i in range(2, math.floor(math.sqrt(num))+1):
        if num % i == 0:
            return False
    return True

M = int(input())
N = int(input())
primes = []
for num in range(max(M, 2), N+1):
    if is_prime(num) == True:
        primes.append(num)

if len(primes) == 0:
    print(-1)
else:
    print(sum(primes))
    print(primes[0])