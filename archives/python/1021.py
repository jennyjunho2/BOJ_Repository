import sys
input = sys.stdin.readline

from collections import deque
N, M = map(int, input().split())
queue = deque([x for x in range(1, N+1)])
nums = list(map(int, input().split()))
cnt = 0

for num in nums:
	idx = queue.index(num) + 1
	left = idx - 1
	right = len(queue) - idx
	if left > right:
		while queue[0] != num:
			queue.rotate(1)
			cnt += 1
	else:
		while queue[0] != num:
			queue.rotate(-1)
			cnt += 1
	queue.popleft()
print(cnt)