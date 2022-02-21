from collections import deque
import sys


def push_front(q, X): q.appendleft(X)


def push_back(q, X): q.append(X)


def pop_front(q):
	if len(q) == 0:
		print(-1)
	else:
		a = q.popleft()
		print(a)


def pop_back(q):
	if len(q) == 0:
		print(-1)
	else:
		a = q.pop()
		print(a)


def size(q): print(len(q))


def empty(q): print(1 if len(q) == 0 else 0)


def front(q): print(q[0] if len(q) != 0 else -1)


def back(q): print(q[-1] if len(q) != 0 else -1)


N = int(sys.stdin.readline().strip())
queue = deque()
for _ in range(N):
	command = sys.stdin.readline().strip()
	if (command.count(" ") != 0):
		command2, num = command.split()
		if command2 == "push_front":
			push_front(queue, num)
		elif command2 == "push_back":
			push_back(queue, num)
	else:
		if command == "pop_front":
			pop_front(queue)
		elif command == "pop_back":
			pop_back(queue)
		elif command == "size":
			size(queue)
		elif command == "empty":
			empty(queue)
		elif command == "front":
			front(queue)
		elif command == "back":
			back(queue)