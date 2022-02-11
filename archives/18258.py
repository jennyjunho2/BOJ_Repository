import sys
input = sys.stdin.readline

from collections import deque
N = int(input())
queue = deque([])
for _ in range(N):
	comm = input().split()
	if comm[0] == 'push': queue.append(comm[1])
	elif comm[0] == 'pop': print(-1 if not queue else queue.popleft())
	elif comm[0] == 'size': print(len(queue))
	elif comm[0] == 'empty': print(1 if not queue else 0)
	elif comm[0] == 'front': print(-1 if not queue else queue[0])
	elif comm[0] == 'back': print(-1 if not queue else queue[-1])