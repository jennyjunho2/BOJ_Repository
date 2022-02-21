import sys
input = sys.stdin.readline

def dfs(graph, node, visited):
	for i in graph[node]:
		if not visited[i]:
			visited[i] = visited[node] + 1
			dfs(graph, i, visited)

n = int(input())
start, dest = map(int, input().split())
m = int(input())
graph = [[] for _ in range(n+1)]
for _ in range(m):
	a, b = map(int, input().split())
	graph[a].append(b)
	graph[b].append(a)
visited = [0] * (n+1)
dfs(graph, start, visited)
print(visited[dest] if visited[dest] > 0 else -1)
