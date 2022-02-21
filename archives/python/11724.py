import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

def DFS(graph, node, visited):
    visited[node] = True
    for i in graph[node]:
        if not visited[i]:
            DFS(graph, i, visited)

N, M = map(int, input().split())
graph = [[] for _ in range(N+1)]
visited = [False] * (N+1)
for _ in range(M):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

cnt = 0
for i in range(1, N+1):
    if visited[i] == False:
        cnt += 1
        DFS(graph, i, visited)
print(cnt)