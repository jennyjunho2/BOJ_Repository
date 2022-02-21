import sys
input = sys.stdin.readline

from collections import deque
def bfs():
    global queue
    while queue:
        z, y, x = queue.popleft()
        for i in range(6):
            nx, ny, nz = x + moveset[i][0], y + moveset[i][1], z + moveset[i][2]
            if nx < 0 or nx >= M or ny < 0 or ny >= N or nz < 0 or nz >= H:
                continue
            
            if box[nz][ny][nx] == 0:
                box[nz][ny][nx] = box[z][y][x] + 1
                queue.append((nz, ny, nx))

M, N, H = map(int, input().split())
box = [[list(map(int, input().split())) for _ in range(N)] for _ in range(H)]
moveset = [(-1, 0, 0), (1, 0, 0), (0, 1, 0), (0, -1, 0), (0, 0, 1), (0, 0, -1)]
days = 0
queue = deque([])
for i in range(H):
    for j in range(N):
        for k in range(M):
            if box[i][j][k] == 1:
                queue.append((i, j, k))

bfs()

for i in range(H):
    for j in range(N):
        for k in range(M):
            if box[i][j][k] == 0:
                print(-1)
                exit()
            if days < box[i][j][k]:
                days = box[i][j][k]
print(days - 1)