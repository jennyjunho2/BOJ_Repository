# 왜 중국인의 정리일까?
# 생각보다 아이디어를 내기 어려웠던 문제

import sys
input = sys.stdin.readline

T = int(input())
for _ in range(T):
	M, N, x, y = map(int, input().split())
	flag = True
	while (x <= M*N):
		if x%N == y%N:
			print(x)
			flag = False
			break
		x += M
	if flag : print(-1)