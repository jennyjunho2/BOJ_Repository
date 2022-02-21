import sys
input = sys.stdin.readline

N = int(input())
stairs = []
for _ in range(N):
	stairs.append(int(input()))
if N == 1:
	dp = [stairs[0]]
elif N == 2:
	dp = [stairs[0], max(stairs[1], stairs[0] + stairs[1])]
else:
	dp = [stairs[0], max(stairs[1], stairs[0] + stairs[1]), max(stairs[0] + stairs[2], stairs[1] + stairs[2])]

if N >= 3:
	dp = dp + [0] * (N - 3)
	for i in range(3, N):
		dp[i] = max(dp[i - 2] + stairs[i], dp[i - 3] + stairs[i - 1] + stairs[i])
else:
	pass

print(dp[N - 1])