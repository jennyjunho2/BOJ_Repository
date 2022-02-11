import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

def dfs(x, y):
	if x < 0 or y < 0 or x >= N or y >= M:
		return False

	if graph[x][y] == 1:
		graph[x][y] = 0
		dfs(x-1, y)
		dfs(x+1, y)
		dfs(x, y+1)
		dfs(x, y-1)
		return True
	return False

T = int(input())
for _ in range(T):
	M, N, K = map(int, input().split())
	graph = [[0] * M for _ in range(N)]
	for _ in range(K):
		x, y = map(int, input().split())
		graph[y][x] = 1

	cnt = 0
	for i in range(M):
		for j in range(N):
			if dfs(j, i):
				cnt += 1
	print(cnt)