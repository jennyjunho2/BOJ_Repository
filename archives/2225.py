# 중복조합으로도 풀이가능!!

import sys
input = sys.stdin.readline

N, K = map(int, input().split())
# dp[K][N] = K개를 더하여 N을 만드는 방법
dp = [[0] * 201 for _ in range(201)]
MOD = 1000000000
for i in range(N+1):
    dp[1][i] = 1

for i in range(2, K+1):
    for j in range(N+1):
        for k in range(j+1):
            dp[i][j] += dp[i-1][j-k]
            dp[i][j] %= MOD
print(dp[K][N])