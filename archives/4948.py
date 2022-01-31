import math
import sys
#input = sys.stdin.readline

def is_prime(num):
    if num == 1:
        return False
    for i in range(2, math.floor(math.sqrt(num)) + 1):
        if num % i == 0:
            return False
    return True

while True:
    cnt = 0
    n = int(input())
    if n == 0:
        break
    else:
        primes = [i for i in range(n+1, 2*n + 1 ) if is_prime(i)]
        print(len(primes))