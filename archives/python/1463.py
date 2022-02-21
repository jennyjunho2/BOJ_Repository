# DP로 해결가능

import sys
input = sys.stdin.readline

N = int(input())
dp = [0] * (10**6 + 1)
dp[1], dp[2], dp[3] =0, 1, 1
if N == 1:
    print(0)
elif N == 2 or N == 3:
    print(1)
else:
    for i in range(4, N+1):
        if i % 2 == 0 and i % 3 == 0:
            dp[i] = min(dp[i-1] + 1, dp[i//2] + 1, dp[i//3] + 1)
        elif i % 2 == 0:
            dp[i] = min(dp[i-1] + 1, dp[i//2] + 1)
        elif i % 3 == 0:
            dp[i] = min(dp[i-1] + 1, dp[i//3] + 1)
        else:
            dp[i] = dp[i-1] + 1
    print(dp[i])