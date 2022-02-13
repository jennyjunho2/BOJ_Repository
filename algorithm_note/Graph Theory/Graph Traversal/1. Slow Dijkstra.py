# V : 정점의 개수, E : 한 정점의 주변 노드의 수
# 시간복잡도 : O(V^2)
# get_smallest_node를 통해 가장 최단거리를 탐색하는 방법
# 결국 그리디 알고리즘의 확장
# 음의 간선 가중치 존재시 사용불가능
# 다익스트라로 감옥 탈출하기 : https://www.youtube.com/watch?time_continue=6&v=lufECeWtN34&feature=emb_title

import sys
input = sys.stdin.readline
INF = int(1e9)

# n : 노드의 개수
# m : 간선의 개수
n, m = map(int, input().split())
# start : 시작 노드 번호
start = int(input())
graph = [[] for i in range(n+1)]
visited = [False] * (n+1)
distance = [INF] * (n+1)

for _ in range(m):
    # a번 노드에서 b번 노드로 가는 비용이 c
    a, b, c = map(int, input().split())
    graph[a].append((b, c))

# 방문하지 않은 노드 중 가장 최단 거리가 짧은 노드의 번호 반환
# 이 부분에서 V*만큼 시간복잡도 증가
def get_smallest_node():
    min_value = INF
    index= 0 
    for i in range(1, n+1):
        if distance[i] < min_value and not visited[i]:
            min_value = distance[i]
            index = i
    return index

def dijkstra(start):
    # 시작 노드에 대하여 초기화
    distance[start] = 0
    visited[start] = True
    for j in graph[start]:
        distance[j[0]] = j[1]
    
    # 시작 노드를 제외한 전체 n-1개의 노드에 대해 반복
    for i in range(n-1):
        now = get_smallest_node()
        visited[now] = True
        # 현재 노드와 연결된 다른 노드 확인
        for j in graph[now]:
            cost = distance[now] + j[1]
            # 현재 노드를 거쳐 다른 노드를 이동하는 거리가 더 짧은 경우
            if cost < distance[j[0]]:
                distance[j[0]] = cost

dijkstra(start)
for i in range(1, n+1):
    # 도달할 수 없는 경우, INF 출력
    if distance[i] == INF:
        print("INF", end = " ")
    else:
        print(distance[i], end = " ")

# Input
"""
6 11
1
1 2 2
1 3 5
1 4 1
2 3 3
2 4 2
3 2 3
3 6 5
4 3 3
4 5 1
5 3 1
5 6 2
"""

# Output
"""
0 2 3 1 2 4
"""