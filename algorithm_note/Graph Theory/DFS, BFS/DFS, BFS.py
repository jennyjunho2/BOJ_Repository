# https://www.acmicpc.net/problem/1260

import sys
input = sys.stdin.readline

# DFS : 재귀 + 스택
def dfs(graph, init, visited):
    # 현재 노드를 방문했다고 표시
	visited[init] = True
	print(init, end = " ")
    # 현재 노드와 연결된 다른 노드 재귀적으로 방문
	for i in graph[init]:
        # 만약 다음 노드를 방문을 안했다면...
		if not visited[i]:
            # 재귀적으로 다음 노드부터 DFS 시작
			dfs(graph, i, visited)

# BFS : 큐 + 큐 자료구조 활용
from collections import deque
def bfs(graph, init, visited):
	queue = deque([init])
    # 현재 노드를 방문했다고 표시
	visited[init] = True
    # 큐가 빌때까지
	while queue:
        # 큐의 맨 앞 원소를 꺼내고... 
		v = queue.popleft()
		print(v, end = " ")
        # 해당 원소와 연결되어있고 방문하지 않은 원소들을 큐에 삽입
		for i in graph[v]:
			if not visited[i]:
				queue.append(i)
				visited[i] = True

# N : 정점의 개수
# M : 간선의 개수
# V : 탐색 시작 번호
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