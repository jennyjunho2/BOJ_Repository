# LCS 문제

import sys
input = sys.stdin.readline

first = input().strip()
second = input().strip()
first_len = len(first)
second_len = len(second)
lcs = [[0] * (second_len + 1) for _ in range(first_len + 1)]
for i in range(first_len+1):
    for j in range(second_len+1):
        if i == 0 or j == 0:
            lcs[i][j] = 0
        elif first[i-1] == second[j-1]:
            lcs[i][j] = lcs[i-1][j-1]+1
        else:
            lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1])
print(max(map(max, lcs)))