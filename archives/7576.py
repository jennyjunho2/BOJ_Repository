import sys
input = sys.stdin.readline

import copy
from collections import deque

def bfs():
    global queue
    while queue:
        y, x = queue.popleft()
        for i in range(4):
            nx, ny = x + moveset[i][0], y + moveset[i][1]
            if nx < 0 or nx >= M or ny < 0 or ny >= N:
                continue
            
            if box[ny][nx] == 0:
                box[ny][nx] = box[y][x] + 1
                queue.append((ny, nx))

M, N = map(int, input().split())
box = [list(map(int, input().split())) for _ in range(N)]
moveset = [(-1, 0), (1, 0), (0, 1), (0, -1)]
days = 0
queue = deque([])
for i in range(N):
    for j in range(M):
        if box[i][j] == 1:
            queue.append((i, j))

bfs()

for i in range(N):
    for j in range(M):
        if box[i][j] == 0:
            print(-1)
            exit()
        if days < box[i][j]:
            days = box[i][j]
print(days - 1)