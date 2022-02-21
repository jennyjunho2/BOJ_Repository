import sys
input = sys.stdin.readline

N = int(input())
nums = list(map(int, input().split()))
prime_min = [x for x in range(5000001)]
prime_min[0] = prime_min[1] = -1
for i in range(2, int(5000001**0.5) + 1):
    if prime_min[i] == i: # if i is prime
        for j in range(i**2, 5000001, i):
            if prime_min[j] == j:
                prime_min[j] = i

for x in nums:
    while x > 1:
        print(prime_min[x], end = " ")
        x //= prime_min[x]
    print()