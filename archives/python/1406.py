# two stack으로 구현
# (left_stack) | cursor | (right_stack)
# string comprehension : TLE

import sys
input = sys.stdin.readline
from collections import deque

left_stack = deque(input().strip())
right_stack = deque([])
M = int(input())
for _ in range(M):
	word = input().split()
	if word[0] == 'L':
		if left_stack:
			right_stack.appendleft(left_stack.pop())
	elif word[0] == 'D':
		if right_stack:
			left_stack.append(right_stack.popleft())
	elif word[0] == 'B':
		if left_stack:
			left_stack.pop()
	else:
		add = word[1]
		left_stack.append(add)
print("".join(left_stack) + "".join(right_stack))