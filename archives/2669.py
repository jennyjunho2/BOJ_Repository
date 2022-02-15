import sys
input = sys.stdin.readline

graph = [[0] * 101 for _ in range(101)]
cnt = 0
for _ in range(4):
    x1, y1, x2, y2 = map(int, input().split())
    for i in range(x1, x2):
        for j in range(y1, y2):
            if graph[i][j] == 0:
                graph[i][j] = 1
                cnt += 1
print(cnt)