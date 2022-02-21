# 무엇이 반복될까?

import sys
input = sys.stdin.readline

dp = [[0, 0, 0, 0] for _ in range(10001)]
dp[1] = [0, 1, 0, 0]
dp[2] = [0, 1, 1, 0]
dp[3] = [0, 1, 1, 1]

for i in range(4, 10001):
	dp[i][1] = 1
	dp[i][2] = dp[i-2][2] + dp[i-2][1]
	dp[i][3] = dp[i-3][1] + dp[i-3][2] + dp[i-3][3]

T = int(input())
for _ in range(T):
	n = int(input())
	print(dp[n][1] + dp[n][2] + dp[n][3])