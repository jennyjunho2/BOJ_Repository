# 왜 DFS는 TLE 뜨고 BFS는 안뜰까?
# 재귀가 느려서 그런가?
# DFS로 작성하면 python3 : TLE, pypy3 : MLE 발생
# BFS로 작성하면 python3 : TLE, pypy3 : 성공

import sys
input = sys.stdin.readline

from collections import deque
def bfs(graph, node, visited):
    global cnt
    cnt += 1
    visited[node] = True
    queue = deque([node])
    while queue:
        v = queue.popleft()
        for i in graph[v]:
            if not visited[i]:
                queue.append(i)
                visited[i] = True
                cnt += 1


N, M = map(int, input().split())
graph = [[] for _ in range(N+1)]
for _ in range(M):
    a, b = map(int, input().split())
    graph[b].append(a)

result = []
for i in range(1, N+1):
    visited = [False] * (N+1)
    cnt = 0
    bfs(graph, i, visited)
    result.append(cnt)
print(" ".join(map(str, [idx + 1 for idx, x in enumerate(result) if x == max(result)])))