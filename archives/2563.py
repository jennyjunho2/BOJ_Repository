import sys
input = sys.stdin.readline

N = int(input())
graph = [[0] * 100 for _ in range(100)]
for _ in range(N):
    x, y = map(int, input().split())
    for i in range(x, x+10):
        for j in range(y, y+10):
            graph[j][i] = 1
print(sum([row.count(1) for row in graph]))