import sys
input = sys.stdin.readline

mod = 10**9 + 9
dp = [[0] * 1001 for _ in range(1001)]

dp[1][1] = 1
dp[2][1], dp[2][2] = 1, 1
dp[3][1], dp[3][2], dp[3][3] = 1, 2, 1

for i in range(4, 1001):
	for j in range(1, 1001):
		dp[i][j] = (dp[i-1][j-1]+dp[i-2][j-1]+dp[i-3][j-1]) % mod

T = int(input())
for _ in range(T):
	n, m = map(int, input().split())
	result = 0
	for i in range(1, m+1):
		result += dp[n][i]
	print(result % mod)