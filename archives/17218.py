# Longest Common Subsequence(LCS) Algorithm

import sys
input = sys.stdin.readline

def LCS(first, second):
	first_len = len(first)
	second_len = len(second)
	# max array 만들기
	lcs = [[0] * (second_len + 1) for _ in range(first_len + 1)]
	for i in range(first_len+1):
		for j in range(second_len+1):
			if i == 0 or j == 0:
				lcs[i][j] = 0
			elif first[i-1] == second[j-1]:
				lcs[i][j] = lcs[i-1][j-1]+1
			else:
				lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1])

	# 결과 뽑기
	result = ''
	i = first_len
	j = second_len
	while True:
		if lcs[i][j] == 0:
			break
		elif lcs[i][j] == lcs[i-1][j]:
			i -= 1
		elif lcs[i][j] == lcs[i][j-1]:
			j -= 1
		else:
			result += first[i-1]
			i -= 1
			j -= 1
	return result[::-1]

first = input().strip()
second = input().strip()
print(LCS(first, second))