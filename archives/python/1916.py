import sys
input = sys.stdin.readline

import heapq as hq
INF = 10**9

N = int(input())
M = int(input())
graph = [[] for _ in range(N+1)]
for _ in range(M):
    a, b, c = map(int, input().split())
    graph[a].append((b, c))

start, end = map(int, input().split())
distance = [INF] * (N+1)

def dijkstra(start):
    queue = []
    hq.heappush(queue, (0, start))
    distance[start] = 0
    while queue:
        dist, now = hq.heappop(queue)
        if distance[now] < dist:
            continue

        for i in graph[now]:
            cost = dist + i[1]
            if cost < distance[i[0]]:
                distance[i[0]] = cost
                hq.heappush(queue, (cost, i[0]))

dijkstra(start)
print(distance[end])