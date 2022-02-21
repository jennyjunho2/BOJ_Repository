import sys
input = sys.stdin.readline

from itertools import product
N, M = map(int, input().split())
nums = sorted(map(int, input().split()))
for i in product(nums, repeat = M):
    print(*i)