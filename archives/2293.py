import sys
input = sys.stdin.readline

n, k = map(int, input().split())
dp = [0] * 10001
coins = [int(input()) for _ in range(n)]
dp[0] = 1
for coin in coins:
    for j in range(1, k+1):
        if j >= coin:
            dp[j] += dp[j-coin]
print(dp[k])