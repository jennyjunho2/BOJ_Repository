# 다익스트라 알고리즘과의 차이점
# 음의 간선 가중치가 있어도 가능
# 만약 음의 사이클이 존재할 경우 검출 가능
# -> 이는 인접 간선 검사 및 거리 갱신을 V-1번으로 제한
# 시간복잡도 : O(VE)

import sys
input = sys.stdin.readline
INF = int(1e9)

# n : 노드의 개수
# m : 간선의 개수
n, m = map(int, input().split())
# start : 시작 노드 번호
start = int(input())
graph = [[] for i in range(n+1)]
distance = [INF] * (n+1)

def bellman_ford(start):
    distance[start] = 0

    for _ in range(m):
        # a번 노드에서 b번 노드로 가는 비용이 c
        a, b, c = map(int, input().split())
        graph[a].append((b, c))

    # 간선 개수 (V-1)만큼 반복
    for _ in range(m-1):
        for i in range(1, n+1):
            for now, dist in graph[i]:
                if distance[now] > distance[i] + dist:
                    distance[now] = distance[i] + dist

    # 음의 사이클 확인작업
    for i in range(1, n+1):
        for now, dist in graph[i]:
            if distance[now] > distance[i] + dist:
                print("그래프에 음의 사이클 존재")
                return
    return distance

distance_final = bellman_ford(start)
print(*distance_final[1:])

#input
"""
5 8
1
1 2 -1
1 3 4
2 3 3
2 4 2
2 5 2
4 2 1
4 3 5
5 4 -3
"""
# output
"0 -1 2 -2 1"