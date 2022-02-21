import sys
input = sys.stdin.readline

from collections import deque
def bfs(row, col):
    queue = deque([(row, col)])
    visited = [[0] * M for _ in range(N)]
    visited[row][col] = 1
    cnt = 0
    while queue:
        x, y = queue.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx < 0 or nx >= N or ny < 0 or ny >= M:
                continue
            elif visited[nx][ny] == 0 and graph[nx][ny] == "L":
                visited[nx][ny] = visited[x][y] + 1
                cnt = max(cnt, visited[nx][ny])
                queue.append((nx, ny))
    return cnt - 1

N, M = map(int, input().split())
graph = [list(input().strip()) for _ in range(N)]
dx = [-1, 1, 0, 0]
dy = [0, 0, 1, -1]

result = 0
for i in range(N):
    for j in range(M):
        if graph[i][j] == "L":
            result = max(result, bfs(i, j))
print(result)