# 구현을 연습하자

import sys
input = sys.stdin.readline

def rotate():
    global N, M, arr
    squares = min(N, M) // 2
    for i in range(squares):
        n = N - i - 1
        m = M - i - 1
        
        temp = arr[i][i]

        for j in range(i, m):
            arr[i][j] = arr[i][j+1]

        for j in range(i, n):
            arr[j][m] = arr[j+1][m]
        
        for j in range(m, i, -1):
            arr[n][j] = arr[n][j-1]

        for j in range(n, i, -1):
            arr[j][i] = arr[j-1][i]
        
        arr[i+1][i] = temp

N, M, R = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(N)]
for i in range(R):
    rotate()

for i in arr: print(" ".join(map(str, i)))