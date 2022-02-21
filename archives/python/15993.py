import sys
input = sys.stdin.readline

mod = 10**9 + 9
dp = [[0] * 100001 for _ in range(2)]
odd, even = 0, 1
dp[odd][1] = 1
dp[odd][2], dp[even][2] = 1, 1
dp[odd][3], dp[even][3] = 2, 2

for i in range(4, 100001):
	dp[odd][i] = (dp[even][i-1] + dp[even][i-2] + dp[even][i-3]) % mod
	dp[even][i] = (dp[odd][i-1] + dp[odd][i-2] + dp[odd][i-3]) % mod

T = int(input())
for _ in range(T):
	n = int(input())
	print(dp[odd][n], dp[even][n])