# DP의 아이디어

import sys
input = sys.stdin.readline

N = int(input())
matrix = [[0, 0]] + [list(map(int, input().split())) for _ in range(N)]
dp = [[0] * 502 for _ in range(502)]
for i in range(1, N): # i = 구간 범위의 크기
	for j in range(1, N-i+1): # j = 구간 범위의 시작점
		dp[j][j+i] = 10**10
		for k in range(j, i+j+1): # k : 구간 범위 두 지점을 나누는 기준
			dp[j][j+i] = min(dp[j][j+i] , dp[j][k] + dp[k+1][j+i] + matrix[j][0] * matrix[k][1] * matrix[j+i][1])
print(dp[1][N])