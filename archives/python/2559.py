import sys
input = sys.stdin.readline

from itertools import accumulate
N, K = map(int, input().split())
nums =  [0] + list(accumulate(map(int, input().split())))
result = -int(1e9)
for i in range(K, len(nums)):
    partial_sum = nums[i] - nums[i-K]
    result = max(result, partial_sum)
print(result)