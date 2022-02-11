import sys
input = sys.stdin.readline

from collections import deque
def dfs(graph, init, visited):
	visited[init] = True
	print(init, end = " ")
	for i in graph[init]:
		if not visited[i]:
			dfs(graph, i, visited)

def bfs(graph, init, visited):
	queue = deque([init])
	visited[init] = True
	while queue:
		v = queue.popleft()
		print(v, end = " ")
		for i in graph[v]:
			if not visited[i]:
				queue.append(i)
				visited[i] = True

N, M, V = map(int, input().split())
graph = [[] for _ in range(N+1)]
for _ in range(M):
	a, b = map(int, input().split())
	graph[a].append(b)
	graph[b].append(a)

for row in graph:
	row.sort()

visited = [False] * (N+1)
dfs(graph, V, visited)
print()
visited = [False] * (N+1)
bfs(graph, V, visited)