# 분배법칙 아이디어
# 2*(2+3*(2+2)) = (2*2) + (2*3*2) + (2*3*2)
# 스택 안에 숫자를 넣는 형식은 반례가 존재

import sys
input = sys.stdin.readline

from collections import deque
string = input().strip()
stack = deque([])
ans = 0
multiplier = 1

for i in range(len(string)):
	word = string[i]
	if word == "(":
		stack.append(word)
		multiplier *= 2

	elif word == "[":
		stack.append(word)
		multiplier *= 3

	elif word == ")":
		if not stack or stack[-1] != '(':
			print(0)
			exit(0)
		if string[i-1] == "(":
			ans += multiplier
		stack.pop()
		multiplier = multiplier // 2

	elif word == "]":
		if not stack or stack[-1] != '[':
			print(0)
			exit(0)
		if string[i-1] == "[":
			ans += multiplier
		stack.pop()
		multiplier = multiplier // 3

print(0 if stack else ans)