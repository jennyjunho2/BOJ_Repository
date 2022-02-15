import sys
input = sys.stdin.readline

def dfs(y, x, cnt, sums):
    global result
    if cnt >= 4:
        result = max(result, sums)
        return

    visited[y][x] = True
    for i in range(4):
        nx, ny = x + dx[i], y + dy[i]
        if nx < 0 or nx >= M or ny < 0 or ny >= N:
            continue

        if not visited[ny][nx]:
            visited[ny][nx] = True
            dfs(ny, nx, cnt + 1, sums + graph[y][x])
            visited[ny][nx] = False
    visited[y][x] = False

def check_shape(y, x):
    global result
    center = graph[y][x]
    cnt = 4
    local_min = 10000
    for i in range(4):
        nx, ny = x + dx[i], y + dy[i]
        if cnt == 2:
            return
        if nx < 0 or nx >= M or ny < 0 or ny >= N:
            cnt -= 1
            continue
        
        center += graph[ny][nx]
        local_min = min(local_min, graph[ny][nx])
    if cnt == 4:
        center -= local_min

    result = max(result, center)


N, M = map(int, input().split())
graph = [list(map(int, input().split())) for _ in range(N)]
visited = [[False] * M for _ in range(N)]
dx = [0, 0, -1, 1]
dy = [1, -1, 0, 0]
result = 0
for i in range(N):
    for j in range(M):
        visited[i][j] = True
        dfs(i, j, 0, 0)
        visited[i][j] = False
        check_shape(i, j)
print(result)