# 최대 힙 -> 우선순위 큐로 구성
# heapq가 훨씬 빠르긴 하다!

import sys
input = sys.stdin.readline

from queue import PriorityQueue

N = int(input())
stack = PriorityQueue()
for _ in range(N):
	x = int(input())
	if x == 0:
		if stack.qsize() == 0:
			print(0)
		else:
			print(stack.get()[1])
	else:
		stack.put((-x, x))