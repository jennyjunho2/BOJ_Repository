import sys
input = sys.stdin.readline

N, M, B = map(int, input().split())
ground = [list(map(int, input().split())) for _ in range(N)]
height = 0
init_time = 100000000000000000000000000
max_range = max(map(max, ground))
min_range = min(map(min, ground))
for i in range(min_range, max_range+1):
	max, min = 0, 0
	for j in range(N):
		for k in range(M):
			if ground[j][k] < i:
				min += (i - ground[j][k])
			else:
				max += (ground[j][k] - i)
	if max + B < min:
		continue # next

	time = 2 * max + min
	if time <= init_time:
		init_time = time
		height = i
print(init_time, height)