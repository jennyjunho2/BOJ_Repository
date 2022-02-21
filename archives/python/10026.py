import sys
input = sys.stdin.readline

from collections import deque
import copy
def bfs(graph, x, y, option, find):
    dx = [-1, 1, 0, 0]
    dy = [0, 0, -1, 1]
    queue = deque([(x, y)])
    while queue:
        x, y = queue.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx < 0 or ny < 0 or nx >= N or ny >= N:
                continue
            
            if not option:
                if graph[nx][ny] == find:
                    graph[nx][ny] = "0"
                    queue.append((nx, ny))
            else:
                if find == "R" or find == "G":
                    if graph[nx][ny] == "R" or graph[nx][ny] == "G":
                        graph[nx][ny] = "0"
                        queue.append((nx, ny))
                elif find == "B":
                    if graph[nx][ny] == find:
                        graph[nx][ny] = "0"
                        queue.append((nx, ny))

N = int(input())
graph = [list(input().strip()) for _ in range(N)]
graph2 = copy.deepcopy(graph)
cnt1, cnt2 = 0, 0
for i in range(N):
    for j in range(N):
        if graph[i][j] != "0":
            tile = graph[i][j]
            bfs(graph, i, j, False, tile)
            cnt1 += 1

for i in range(N):
    for j in range(N):
        if graph2[i][j] != "0":
            tile = graph2[i][j]
            bfs(graph2, i, j, True, tile)
            cnt2 += 1

print(cnt1, cnt2)