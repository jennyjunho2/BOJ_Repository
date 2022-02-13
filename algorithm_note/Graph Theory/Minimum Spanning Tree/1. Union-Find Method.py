import sys
input = sys.stdin.readline

# 루트 노드 재귀적으로 호출
def find_parent(parent, x):
    if parent[x] != x:
        parent[x] = find_parent(parent, parent[x])
    return parent[x]

# 두 원소가 속한 집합을 합치기
def union_parent(parent, a, b):
    a = find_parent(parent, a)
    b = find_parent(parent, b)
    if a < b:
        parent[a] = b 
    else:
        parent[b] = a

# v : 노드의 개수
# e : 간선(Union 연산)의 개수
v, e = map(int, input().split())
# 부모 테이블 초기화
parent = [i for i in range(v+1)]

# 사이클 여부
cycle = False

for i in range(e):
    a, b = map(int, input().split())
    if find_parent(parent, a) == find_parent(parent, b):
        cycle = True
        break
    else:
        union_parent(parent, a, b)
        
print("사이클 존재" if cycle else "사이클 존재 X")
