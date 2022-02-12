# 트리 자료 구조 사용
# 서로소 부분 집합들로 나누어진 원소들의 데이터를 처리하기 위한 자료구조
# 재귀적으로 부모를 찾아감
# 최대 (V-1)번의 union 연산과 M개의 find 연산을 할 수 있기에
# 시간 복잡도는 O(V+M(1+log_{2-M/V} V))를 가짐

import sys
input = sys.stdin.readline

# 특정 원소가 속한 집합 찾기
def find_parent(parent, x):
    # 루트 노드가 아니면, 루트 노드를 찾을 때까지 재귀적 호출
    if parent[x] != x:
        parent[x] = find_parent(parent, parent[x])
    return parent[x]

# 두 원소가 속한 집합 합치기
def union_parent(parent, a, b):
    a, b = find_parent(parent, a), find_parent(parent, b)
    if a < b :
        parent[b] = a
    else:
        parent[a] = b

# 노드의 개수와 간선(union 연산)의 개수 입력받기
v, e = map(int, input().split())
# 부모 테이블 초기화
parent = [i for i in range(v+1)]

# union 연산 수행
for i in range(e):
    a, b = map(int, input().split())
    union_parent(parent, a, b)

# 원소가 속한 집합 출력
print(*[find_parent(parent, i) for i in range(1, v+1)])
# 부모 테이블 내용 출력
print(*parent[1:])