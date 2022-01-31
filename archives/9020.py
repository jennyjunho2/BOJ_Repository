import sys
import math
input = sys.stdin.readline

def is_prime(num):
    if num == 1:
        return False
    else:
        for i in range(2, math.floor(math.sqrt(num)) + 1):
            if num%i == 0:
                return False
        return True

T = int(input())
for _ in range(T):
    n = int(input())
    for i in range(n//2, 1, -1):
        if is_prime(i) and is_prime(n-i):
            print(i, n-i)
            break