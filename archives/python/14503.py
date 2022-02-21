import sys
input = sys.stdin.readline

def turn_left():
    global d
    d -= 1
    if d == -1:
        d = 3

N, M = map(int, input().split())
x, y, d = map(int, input().split())
graph = [list(map(int, input().split())) for _ in range(N)]
visited = [[0] * M for _ in range(N)]
visited[x][y] = 1
dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

cnt = 1
turn_time = 0
while True:
    turn_left()
    nx = x + dx[d]
    ny = y + dy[d]
    if graph[nx][ny] == 0 and visited[nx][ny] == 0:
        visited[nx][ny] = 1
        x, y = nx, ny
        cnt += 1
        turn_time = 0
        continue
    else:
        turn_time += 1
    
    if turn_time == 4:
        nx = x - dx[d]
        ny = y - dy[d]
        if graph[nx][ny] == 0:
            x, y = nx, ny
        else:
            break
        turn_time = 0

print(cnt)