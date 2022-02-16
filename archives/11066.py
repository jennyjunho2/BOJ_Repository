# O(N^3)

import sys
input = sys.stdin.readline

from itertools import accumulate
T = int(input())
INF = 10**9
for _ in range(T):
    K = int(input())
    nums = list(map(int, input().split()))
    accumulate_nums = [0] + list(accumulate(nums))
    
    # dp[i][j] = i부터 j까지의 최소비용
    dp = [[0] * 501 for _ in range(501)]
    for i in range(1, K):
        for j in range(1, K - i + 1):
            k = j + i
            dp[j][k] = INF
            for l in range(j, k):
                dp[j][k] = min(dp[j][k], dp[j][l] + dp[l+1][k] + accumulate_nums[k] - accumulate_nums[j - 1])
    print(dp[1][K])