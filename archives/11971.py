import sys
input = sys.stdin.readline

N, M = map(int, input().split())
limits = [tuple(map(int, input().split())) for _ in range(N)]
speeds = [tuple(map(int, input().split())) for _ in range(M)]
result = 0

limit_flatten = []
speed_flatten = []
for road, limit in limits:
	limit_flatten += [limit] * road
for road, speed in speeds:
	speed_flatten += [speed] * road
for i in range(100):
	result = max([x-y for x, y in zip(speed_flatten, limit_flatten)])
print(max(result, 0))