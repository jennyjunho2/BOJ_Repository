import sys
input = sys.stdin.readline

N = int(input())
graph = [[0] * 1001 for _ in range(1001)]
cnt = 1
table = {}
for i in range(1, N+1):
    table[i] = 0

for _ in range(N):
    x, y, width, height = map(int, input().split())
    for i in range(x, x + width):
        for j in range(y, y + height):
            graph[i][j] = cnt
    cnt += 1

for i in range(1001):
    for j in range(1001):
        num = graph[i][j]
        if 0 < num <= N:
            table[num] += 1

print("\n".join(map(str, table.values())))