import sys
input = sys.stdin.readline

from itertools import accumulate
a = list(sorted(accumulate([int(input()) for _ in range(10)]), key = lambda x : abs(x-100)))[:2]
if abs(a[0] - 100) == abs(a[1] - 100):
    print(a[1])
else:
    print(a[0])