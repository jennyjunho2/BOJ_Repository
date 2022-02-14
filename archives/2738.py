import sys
input = sys.stdin.readline

N, M = map(int, input().split())
A = [list(map(int, input().split())) for _ in range(N)]
B = [list(map(int, input().split())) for _ in range(N)]
new = [[0] * M for _ in range(N)]
for j in range(M):
    for i in range(N):
        new[i][j] = A[i][j] + B[i][j]

for i in new:
    print(" ".join(map(str, i)))
