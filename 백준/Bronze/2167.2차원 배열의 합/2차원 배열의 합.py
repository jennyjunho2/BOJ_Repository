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