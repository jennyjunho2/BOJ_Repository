# 출발점과 도착점이 지정된 경우, 예측함수를 통해 최적의 값을 찾는 알고리즘
# 예측함수는 실제 값보다 작게 나와야 함.
# 예측함수에 따라 최적의 값을 찾지 못하는 경우 발생
# 그래도 그래프가 유한하고, 고정된 가중치를 가질 경우 완전함

# import sys
# input = sys.stdin.readline
# INF = int(1e9)

# n, m = map(int, input().split())
# start = int(input())
# graph = [[] for i in range(n+1)]
# distance = [INF] * (n+1)

# for _ in range(m):
#     a, b, c = map(int, input().split())
#     graph[a].append((b, c))

# def Astar(start):
#     queue = []
#     heapq.heappush(q, (0, start))
#     distance[start] = 0
#     while queue:
#         dist, now = heapq.heappop()
#         if distance[now] < dist:
#             continue
#         for i in graph[now]:
#             cost = dist + i[1]
#             if cost < distance[i[0]]:
#                 distance[i[0]] = cost
#                 heapq.heappush(queue, (cost, i[0]))

# Astar(start)

# for i in range(n+1):
#     if distance[i] == INF:
#         print("INF", end = " ")
#     else:
#         print(distance[i])