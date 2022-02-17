import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

def dfs(node):
    global cnt
    cnt += 1
    visited[node] = cnt
    for i in graph[node]:
        if not visited[i]:
            dfs(i)

N, M, R = map(int, input().split())
graph = [[] * (N+1) for _ in range(N+1)]
visited = [0] * (N+1)
for _ in range(M):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

for i in range(1, N+1):
    graph[i].sort()

cnt = 0
dfs(R)
print("\n".join(map(str, visited[1:])))