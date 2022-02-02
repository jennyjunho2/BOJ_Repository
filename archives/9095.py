import sys
input = sys.stdin.readline

dp = [0, 1, 2, 4] + [None]*7
for i in range(4, 11):
	dp[i] = dp[i-3]+dp[i-2]+dp[i-1]

T = int(input())
for _ in range(T):
	n = int(input())
	print(dp[n])