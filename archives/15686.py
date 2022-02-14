import sys
input = sys.stdin.readline

def distance(a, b):
    return abs(a[0]-b[0]) + abs(a[1]-b[1])

from itertools import combinations
N, M = map(int, input().split())
graph = [list(map(int, input().split())) for _ in range(N)]
chickens, houses = [], []
for i in range(N):
    for j in range(N):
        if graph[i][j] == 2:
            chickens.append((i, j))
        elif graph[i][j] == 1:
            houses.append((i, j))

result = 10000
for chicken in combinations(chickens, M):
    total_chicken_distance = 0
    for i in houses:
        total_chicken_distance += min(map(lambda x : distance(x, i), chicken))
    result = min(result, total_chicken_distance)
print(result)