# 우선순위 큐를 이용하여 시간개선
# 시간복잡도 : O(ElogV)

import heapq
import sys
input = sys.stdin.readline
INF = int(1e9)


n, m = map(int, input().split())
start, end = map(int, input().split())
graph = [[] for i in range(n+1)]
distance = [INF] * (n+1)

for _ in range(m):
    # a번 노드에서 b번 노드로 가는 비용이 c
    a, b, c = map(int, input().split())
    graph[a].append((b, c))

def dijkstra(start, end):
    # 우선순위 큐를 이용함
    queue = []
    # 시작 노드로 가기 위한 최단 경로는 0으로 설정(가장 먼저)
    heapq.heappush(queue, (0, start))
    distance[start] = 0
    # 부모 노드 초기화
    parent = [x for x in range(n+1)]
    while queue:
        # 가장 최단 거리가 짧은 노드에 대한 정보 꺼내기
        dist, now = heapq.heappop()
        # 현재 노드가 처리된 노드라면 무시
        if distance[now] < dist:
            continue
        # 현재 노드와 인접한 노드들 확인
        for i in graph[now]:
            cost = dist + i[1]
            # 현재 노드를 거쳐 다른 노드로 이동하는 거리가 더 짧을 경우
            if cost < distance[i[0]]:
                distance[i[0]] = cost
                heapq.heappush(queue, (cost, i[0]))
                parent[i[0]] = now
                
    # 만약 경로를 직접 찾을 때는 다음과 같이 재귀적으로 부모 노드 호출
    path = []
    now = end
    while now != start:
        path.append(now)
        now = parent[now]
    path.append(start)
    return path[::-1]

path = dijkstra(start, end)

for i in range(n+1):
    if distance[i] == INF:
        print("INF", end = " ")
    else:
        print(distance[i])
        print(*path)