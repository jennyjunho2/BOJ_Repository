import sys
input = sys.stdin.readline

from itertools import combinations
N, M = map(int, input().split())
nums = sorted(map(int, input().split()))
for i in combinations(nums, M):
    print(*i)