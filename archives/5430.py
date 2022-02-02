# 극단적인 테스트 케이스 항상 생각하자.

import sys
input = sys.stdin.readline

from collections import deque
T = int(input())
for _ in range(T):
	p = input().strip()
	n = int(input())
	num = deque(input().strip()[1:-1].split(","))
	valid_word = True

	R_count = 0
	for word in p:
		if word == 'R':
			R_count += 1
		elif word == "D":
			if not num or not num[0]:
				valid_word = False
				break
			else:
				if R_count % 2 == 0:
					num.popleft()
				else:
					num.pop()
	if valid_word:
		print("[", end = "")
		if R_count % 2 == 0:
			print(",".join(num), end = "")
		else:
			num.reverse()
			print(",".join(num), end = "")
		print("]")
	else:
		print("error")
