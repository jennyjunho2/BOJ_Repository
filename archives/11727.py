import sys
input = sys.stdin.readline

mod = 10007
dp = [0] * 1002
dp[1], dp[2] = 1, 3
for i in range(3, 1002):
	dp[i] = (dp[i-1] + 2 * dp[i-2]) % mod

n = int(input())
print(dp[n] % mod)