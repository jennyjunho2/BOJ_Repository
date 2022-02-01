# 재귀로 가능

import sys
input = sys.stdin.readline

def check(paper, row, col, size):
	global minus, zero, one
	start = paper[row][col]
	for i in range(row, row+size):
		for j in range(col, col+size):
			if paper[i][j] != start:
				return False
	return True

def recur(paper, row, col, size):
	global minus, zero, one
	result = check(paper, row, col, size)
	if result == True:
		if paper[row][col] == '-1':
			minus += 1
		elif paper[row][col] == '0':
			zero += 1
		elif paper[row][col] == '1':
			one += 1
	else:
		size = size // 3
		for i in range(3):
			for j in range(3):
				recur(paper, row + size * i, col + size * j, size)

N = int(input())
paper = [input().split() for _ in range(N)]
minus, zero, one = 0, 0, 0
recur(paper, 0, 0, N)
print(minus)
print(zero)
print(one)