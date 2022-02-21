# 파이썬은 재귀가 디지게 느리다.
# 1780번 문제와 같은 풀이

import sys
input = sys.stdin.readline

def check(paper, row, col, size):
	start = paper[row][col]
	for i in range(row, row+size):
		for j in range(col, col+size):
			if paper[i][j] != start:
				return False
	return True

def recur(paper, row, col, size):
	result = check(paper, row, col, size)
	if result == True:
		print(paper[row][col], end ='')
	else:
		size = size // 2
		print("(", end = "")
		for i in range(2):
			for j in range(2):
				recur(paper, row + size * i, col + size * j, size)
		print(")", end = "")

N = int(input())
paper = [input() for _ in range(N)]
recur(paper, 0, 0, N)
