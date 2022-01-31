import sys
from collections import deque


def push(queue, X): queue.append(X)
def pop(queue):
	if (len(queue) == 0):
		print(-1)
	else:
		a = queue.popleft()
		print(a)
def size(queue): print(len(queue))
def empty(queue): print(1 if len(queue) == 0 else 0)
def front(queue): print(queue[0] if len(queue) != 0 else -1)
def back(queue): print(queue[-1] if len(queue) != 0 else -1)

N = int(sys.stdin.readline().strip())
q = deque()
for m in range(N):
	command = sys.stdin.readline().strip()
	if (command.count(" ") != 0):
		command2, num = command.split()
		push(q, num)
	else:
		if (command == "pop"):
			pop(q)
		elif (command == "size"):
			size(q)
		elif (command == "empty"):
			empty(q)
		elif (command == "front"):
			front(q)
		elif (command == "back"):
			back(q)