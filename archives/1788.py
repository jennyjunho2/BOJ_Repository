# % 주의!

import sys
input = sys.stdin.readline

dp = [0] * 1000002
dp2 = [0] * 1000002
dp[1] = 1
dp2[0], dp2[1] = 1, 0
for i in range(2, 1000002):
    dp[i] = (dp[i-1] + dp[i-2]) % 1000000000
    dp2[i] = (dp2[i-2] - dp2[i-1]) % 1000000000 if dp2[i-2] - dp2[i-1] >= 0 else ((dp2[i-2] - dp2[i-1]) % 1000000000) - 1000000000

n = int(input())
if n >= 0:
    if dp[n] > 0: print(1)
    elif dp[n] == 0: print(0)
    else: print(-1)
else:
    if dp2[abs(n) + 1] > 0: print(1)
    elif dp2[abs(n) + 1] == 0: print(0)
    else: print(-1)
print(dp[n] if n >= 0 else abs(dp2[abs(n) + 1]))