import sys
input = sys.stdin.readline

from math import sqrt
P, L = map(int, input().split())
is_bad = False

is_prime = [False, False] + [True] * 999999
for i in range(2, int(sqrt(1000001)+1)):
    if is_prime[i]:
        for j in range(i*i, int(sqrt(1000001)+1), i):
            is_prime[j] = False

for i in range(2, L):
    if (is_prime[i] and P%i == 0):
        print("BAD", i)
        is_bad = True
        break
        
if not is_bad:
    print("GOOD")