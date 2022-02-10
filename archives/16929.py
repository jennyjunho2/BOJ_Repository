import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

dx = [0, 0, -1, 1]
dy = [1, -1, 0, 0]
def dfs(row, col, a, b, cnt):
    if row == a and col == b and cnt >= 4:
        print("Yes")
        exit()
    for i in range(4):
        nx = row + dx[i]
        ny = col + dy[i]
        if nx >= 0 and nx < N and ny >= 0 and ny < M and (not visited[nx][ny]) and graph[nx][ny] == graph[row][col]:
            visited[nx][ny] = True
            dfs(nx, ny, a, b, cnt + 1)
            visited[nx][ny] = False
    return

N, M = map(int, input().split())
graph = [list(input().strip()) for _ in range(N)]
visited = [[False] * M for _ in range(N)]
for row in range(N):
    for col in range(M):
        if not visited[row][col]:
            dfs(row, col, row, col, 0)
print("No")