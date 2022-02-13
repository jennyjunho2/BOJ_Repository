import sys
input = sys.stdin.readline

N = int(input())
dp = [0] + [x for x in range(1, N+1)]
for i in range(1, N+1):
	for j in range(1, int(i**0.5) + 1):
		dp[i] = min(dp[i], dp[i-j**2] + 1)
print(dp[N])