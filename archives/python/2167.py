# a[i]부터 a[j]의 합은 sum(a[0]~a[i]) - sum(a[0]~a[j-1]로 표현가능
# 이를 위하여 itertools.accumulate 사용

import sys
input = sys.stdin.readline
from itertools import accumulate

N, M = map(int, input().split())
matrix = [[0] + list(accumulate(map(int, input().split()))) for _ in range(N)]
K = int(input())
for _ in range(K):
	i, j, x, y = map(int, input().split())
	result = 0
	for col in range(i-1, x):
		result += matrix[col][y] - matrix[col][j-1]
	print(result)