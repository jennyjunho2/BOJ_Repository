import sys
input = sys.stdin.readline

def dfs(graph, init, visited):
	global cnt
	visited[init] = True
	cnt += 1
	for i in graph[init]:
		if not visited[i]:
			dfs(graph, i, visited)

N = int(input())
V = int(input())
graph = [[] for _ in range(N+1)]
visited = [False] * (N+1)
for _ in range(V):
	a, b = map(int, input().split())
	graph[a].append(b)
	graph[b].append(a)
cnt = 0
dfs(graph, 1, visited)
print(cnt - 1)