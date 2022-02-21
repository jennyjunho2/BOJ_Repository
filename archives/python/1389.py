import sys
input = sys.stdin.readline

N, M = map(int, input().split())
graph = [[10000] * (N+1) for _ in range(N+1)]
for _ in range(M):
    a, b = map(int, input().split())
    graph[a][b] = 1
    graph[b][a] = 1

for k in range(1, N+1):
    for i in range(1, N+1):
        for j in range(1, N+1):
            graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j])
result = 10**6
kevin_bacon = list(map(sum, graph))
print(kevin_bacon.index(min(kevin_bacon)))

# BFS로도 가능
# import sys
# from collections import deque

# input = sys.stdin.readline

# N,M = map(int, input().split())
# graph = [[] for _ in range(N+1)]
# for i in range(M):
#     a,b = map(int,input().split())
#     graph[a].append(b)
#     graph[b].append(a)

# def bfs(v):
#     # bfs돌때마다 visit 초기화
#     visit = [-1] * (N+1)
#     visit[v] = 0
#     queue = deque([v])
#     while queue:
#         x = queue.popleft()
#         for i in graph[x]:
#             if visit[i] == -1:
#                 visit[i] = visit[x]+1
#                 queue.append(i)
#     count = 0
#     for i in range(1,N+1):
#         count += visit[i]
#     return count

# min_num = 10**9
# answer = []
# for i in range(1, N+1):
#     result = bfs(i)
#     if result < min_num:
#         min_num = result
#         answer = [i]
#     elif result == min_num:
#         answer.append(i)

# print(answer[0])