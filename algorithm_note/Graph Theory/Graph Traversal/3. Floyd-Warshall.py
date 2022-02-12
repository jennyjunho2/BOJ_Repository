# 모든 지점에서 다른 모든 지점까지의 최단 경로 구할 때 사용
# 음의 가중치를 가지는 그래프에도 사용 가능
# DP의 한 종류 - 점화식을 이용하여 DP 배열 갱신
# 시간 복잡도: O(N^3) - 느리다!
# D_ab : a에서 b로 가는 최단 비용이라 할 때
# D_ab = min(Dab, Dak + Dkb)의 점화식을 가짐

import sys
input = sys.stdin.readline
INF = int(1e9)
# 노드의 개수 및 간선의 개수 입력
n = int(input())
m = int(input())
graph =[[INF] * (n+1) for _ in range(n+1)]

for _ in range(m):
    # A에서 B로 가는 비용을 c라 설정
    a, b, c = map(int, input().split())

#자기 자신에게 가는 비용은 0으로 초기화
for i in range(1, n+1):
    graph[i][i] = 0

# 점화식을 이용하여 플로이드-워셜 알고리즘 수행
for k in range(1, n+1):
    for i in range(1, n+1):
        for j in range(1, n+1):
            graph[i][j] = min(graph[i][k] + graph[k][j], graph[i][j])

for i in range(1, n+1):
    for j in range(1, n+1):
        if graph[i][j] == INF:
            print("INF", end = ' ')
        else:
            print(graph[i][j], end = " ")
    print()
