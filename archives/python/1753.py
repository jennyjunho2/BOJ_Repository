import sys
input = sys.stdin.readline

import heapq
INF = int(10**9)
V, E = map(int, input().split())
K = int(input())
graph = [[] for _ in range(V+1)]
distance = [INF] * (V+1)

for _ in range(E):
	u, v, w = map(int, input().split())
	graph[u].append((v, w))

def dijkstra(start):
	queue = []
	distance[start] = 0
	heapq.heappush(queue, (0, start))
	while queue:
		dist, node = heapq.heappop(queue)
		if distance[node] < dist:
			continue
		for i in graph[node]:
			cost = dist + i[1]
			if cost < distance[i[0]]:
				distance[i[0]] = cost
				heapq.heappush(queue, (cost, i[0]))

dijkstra(K)
for i in range(1, V+1):
    print("INF" if distance[i] == INF else distance[i])