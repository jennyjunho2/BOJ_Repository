import sys
input = sys.stdin.readline

from bisect import bisect_left
L = int(input())
nums = sorted(list(map(int, input().split())))
n = int(input())
idx = bisect_left(nums, n)
if idx == 0:
    print(max((nums[0] - n) * n - 1, 0))
else:
    print(max((n-nums[idx-1]) * (nums[idx]-n) - 1, 0))