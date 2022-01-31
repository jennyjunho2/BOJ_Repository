# start = 0일 경우 ZeroDivisionError 남, 1로 설정

import sys
input = sys.stdin.readline

K, N = map(int, input().split())
lines = [int(input()) for _ in range(K)]
start, end = 1, max(lines)

#binary search
while start <= end:
	mid = (start+end) // 2
	num = 0
	for line in lines:
		num += line // mid

	if num >= N:
		start = mid + 1
	else:
		end = mid - 1
print(end)