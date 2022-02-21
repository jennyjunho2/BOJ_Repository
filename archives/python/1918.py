#stack 활용

import sys
input = sys.stdin.readline
from collections import deque

sentence = input()
ans = ''
stack = deque([])

for word in sentence:
	if word in "ABCDEFGHIJKLMNOPQRSTUVWXYZ":
		ans += word
	else:
		if word == "(":
			stack.append(word)
		elif word == "*" or word == "/": # 높은 순위
			while stack and (stack[-1] == "*" or stack[-1] == "/"):
				ans += stack.pop()
			stack.append(word)
		elif word == "+" or word == "-":
			while stack and stack[-1] != '(':
				ans += stack.pop()
			stack.append(word)
		elif word == ")":
			while stack and stack[-1] != "(":
				ans += stack.pop()
			stack.pop()
while stack:
	ans += stack.pop()
print(ans)