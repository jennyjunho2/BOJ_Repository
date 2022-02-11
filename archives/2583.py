import sys
input = sys.stdin.readline

from collections import deque
def bfs(x, y):
    num = 1
    graph[x][y] = 1
    dx = [0, 0, 1, -1]
    dy = [1, -1, 0, 0]
    queue = deque([(x, y)])
    while queue:
        x, y = queue.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx < 0 or ny < 0 or nx >= M or ny >= N:
                continue
            if graph[nx][ny] == 0:
                graph[nx][ny] = 1
                num += 1
                queue.append((nx, ny))
    return num

M, N, K = map(int, input().split())
graph = [[0] * N for _ in range(M)]
for _ in range(K):
    x1, y1, x2, y2 = map(int, input().split())
    for i in range(x1, x2):
        for j in range(y1, y2):
            graph[j][i] = 1

cnt = 0
result = []
for i in range(M):
    for j in range(N):
        if graph[i][j] == 0:
            tiles = bfs(i, j)
            cnt += 1
            result.append(tiles)

print(cnt)
print(" ".join(map(str, sorted(result))))