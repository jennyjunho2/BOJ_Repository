import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

def dfs(x):
    for i in graph[x]:
        if parent[i] == -1:
            parent[i] = x
            dfs(i)

N = int(input())
graph = [[] for _ in range(N+1)]
parent = [-1] * (N+1)
for _ in range(N-1):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

dfs(1)

print("\n".join(map(str, parent[2:])))