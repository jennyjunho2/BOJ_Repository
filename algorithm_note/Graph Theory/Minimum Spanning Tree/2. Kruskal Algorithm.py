# 그리디 알고리즘을 기본으로 하고 있음
# => 가장 작은 간선 가중치부터 탐색
# Union-Find 자료 구조를 바탕으로, 같은 cycle이 아닌 경우(같은 parent) 간선 MST에 추가함
# 시간복잡도 : O(ElogE)

import sys
input = sys.stdin.readline

# 특정 원소가 속한 집합 찾기
def find_parent(parent, x):
    if parent[x] != x:
        parent[x] = find_parent(parent, parent[x])
    return parent[x]

def union_parent(parent, a, b):
    a, b = find_parent(parent, a), find_parent(parent, b)
    if a < b:
        parent[b] = a
    else:
        parent[a] = b
        
# v : 노드의 개수
# e : 간선의 개수
v, e = map(int, input().split())
parent = [x for x in range(v+1)]

# 모든 간선을 담을 리스트와 최종 비용을 담을 변수
edges = []
result = 0

# 모든 간선에 대한 정보 입력받기
for _ in range(e):
    # a에서 b로 가는 비용 cost
    a, b, cost = map(int, input().split())
    edges.append((cost, a, b))
                 
# 간선 비용순으로 정리
edges.sort()
for edge in edges:
    cost, a, b = edge
    # 사이클이 발생하지 않는 경우에만 집합 포함
    if find_parent(parent, a) != find_parent(parent, b):
        union_parent(parent, a, b)
        result += cost
print(result)