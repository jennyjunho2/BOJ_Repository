import sys
input = sys.stdin.readline

dp = [0, 1, 2, 4] + [None]*(10**6)
for i in range(4, 10**6 + 1):
	dp[i] = (dp[i-3]+dp[i-2]+dp[i-1]) % (1000000009)

T = int(input())
for _ in range(T):
	n = int(input())
	print(dp[n])