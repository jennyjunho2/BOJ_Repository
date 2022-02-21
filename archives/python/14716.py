import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

def dfs(x, y):
	if x < 0 or y < 0 or x >= M or y >= N:
		return False

	if graph[x][y] == 1:
		graph[x][y] = 0
		for i in range(8):
			dx, dy = moveset[i][0], moveset[i][1]
			nx = x + dx
			ny = y + dy
			dfs(nx, ny)
		return True
	return False

M, N = map(int, input().split())
graph = [list(map(int, input().split())) for _ in range(M)]
moveset = [(-1, 0), (1, 0), (0, -1), (0, 1), (1, -1), (1, 1), (-1, 1), (-1, -1)]
cnt = 0
for i in range(M):
	for j in range(N):
		if dfs(i, j) == True:
			cnt += 1
print(cnt)