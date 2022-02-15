import sys
input = sys.stdin.readline

from collections import deque
def bfs(shark_x, shark_y):
    queue = deque([(shark_x, shark_y, 0)])
    distance = []
    min_distance = 100000
    visited = [[False] * N for _ in range(N)]
    visited[shark_x][shark_y] = True
    dx = [0, 0, 1, -1]
    dy = [1, -1, 0, 0]
    while queue:
        x, y, dist = queue.popleft()
        for i in range(4):
            nx, ny = x + dx[i], y + dy[i]
            if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny]:
                if graph[nx][ny] <= shark_size:
                    visited[nx][ny] = True
                    if 0 < graph[nx][ny] < shark_size:
                        min_distance = dist
                        distance.append((dist + 1, nx, ny))
                    if dist + 1 <= min_distance:
                        queue.append((nx, ny, dist + 1))
    if distance:
        distance.sort()
        return distance[0]
    else:
        return 
                    
N = int(input())
graph = [list(map(int, input().split())) for _ in range(N)]
fish_cnt = 0
shark_x, shark_y = 0, 0
shark_size = 2
eat_cnt = 0
fish_pos = []
time = 0
for i in range(N):
    for j in range(N):
        if 0 < graph[i][j] <= 6:
            fish_cnt += 1
            fish_pos.append((i, j))
        elif graph[i][j] == 9:
            shark_x, shark_y = i, j
            graph[i][j] = 0

while fish_cnt:
    num = bfs(shark_x, shark_y)
    if not num:
        break
    shark_x, shark_y = num[1], num[2]
    time += num[0]
    eat_cnt += 1
    fish_cnt -= 1
    if shark_size == eat_cnt:
        shark_size += 1
        eat_cnt = 0
    graph[shark_x][shark_y] = 0
print(time)