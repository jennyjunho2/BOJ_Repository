# DP로 가능

import sys
input = sys.stdin.readline

n = int(input())
nums = [int(input()) for _ in range(n)]
dp = [0]*10000

if n == 1:
	print(nums[0])
elif n == 2:
	print(nums[0] + nums[1])
else:
	dp[0] = nums[0]
	dp[1] = nums[0] + nums[1]
	dp[2] = max(nums[0] + nums[2], nums[1] + nums[2], dp[1])
	for i in range(3, n):
		dp[i] = max(dp[i-3] + nums[i-1] + nums[i], dp[i-2] + nums[i], dp[i-1])
	print(dp[n-1])