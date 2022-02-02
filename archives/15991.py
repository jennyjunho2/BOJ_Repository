import sys
input = sys.stdin.readline

mod = 10**9 + 9
dp = [0] * 100001
dp[1] = 1
dp[2] = 2
dp[3] = 2
dp[4], dp[5], dp[6] = 3, 3, 6 # 손으로도 계산 가능

for i in range(7, 100001):
	dp[i] = (dp[i-2] + dp[i-4] + dp[i-6]) % mod # 양 옆에 붙이기

T = int(input())
for _ in range(T):
	n = int(input())
	print((dp[n]) % mod)