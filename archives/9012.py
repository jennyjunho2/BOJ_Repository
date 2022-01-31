import sys
from collections import deque
#input = sys.stdin.readline

T = int(input())
for _ in range(T):
	input_string = input()
	stack = deque([])
	for word in input_string:
		if word == "(":
			stack.append(word)
		elif word == ")":
			if len(stack) == 0 : #empty stack
				stack.append(word)
			else:
				before = stack.pop()
				if before == "(":
					continue
				else:
					stack.append(before)
					stack.append(word)
	if len(stack) == 0:
		print("YES")
	else:
		print("NO")