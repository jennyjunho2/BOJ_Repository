import sys

input = sys.stdin.readline
T = int(input())
cnt = 0
for _ in range(T):
	arr = []
	result = 1
	N = int(input())
	for i in range(N):
		arr.append(tuple(map(int, input().split())))
	arr.sort()

	min = arr[0][1]

	for j in range(1, N):
		if arr[j][1] < min:
			min = arr[j][1]
			result += 1

	cnt += 1
	print(result)