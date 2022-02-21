import sys
input = sys.stdin.readline

mod = 10**9 + 9
dp = [[0, 0, 0, 0] for _ in range(100001)]
dp[1] = [0, 1, 0, 0]
dp[2] = [0, 0, 1, 0]
dp[3] = [0, 1, 1, 1]

for i in range(4, 100001):
	dp[i][1] = (dp[i-1][2] + dp[i-1][3]) % mod
	dp[i][2] = (dp[i-2][1] + dp[i-2][3]) % mod
	dp[i][3] = (dp[i-3][1] + dp[i-3][2]) % mod

T = int(input())
for _ in range(T):
	n = int(input())
	print((dp[n][1] + dp[n][2] + dp[n][3]) % mod)