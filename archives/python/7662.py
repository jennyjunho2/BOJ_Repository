# heapq를 잘 생각해보자.

import sys
input = sys.stdin.readline

import heapq
for _ in range(int(input())):
	N = int(input())
	min_heap, max_heap = [], []
	visited = [False] * 1000001

	for key in range(N):
		instruction, num = input().split()
		if instruction == "I":
			num = int(num)
			heapq.heappush(min_heap, (num, key))
			heapq.heappush(max_heap, (-1 * num, key))
			# True : 어떤 힙에서도 아직 삭제되지 않음
			visited[key] = True
		elif instruction == "D":
			if num == '-1':
				# min_heap : 빈 힙인가 체크
				# visited[min_heap[0][1] : 삭제된 노드 체크
				# key를 기준으로 해당 노드가 다른 힙에서 삭제된 노드인가 체크
				# 삭제된 노드일 경우 삭제되지 않은 노드 나올떄까지 버리다가 이후
				# 삭제 대상 노드가 나오면 삭제
				while min_heap and not visited[min_heap[0][1]]:
					heapq.heappop(min_heap)
				if min_heap:
					visited[min_heap[0][1]] = False
					heapq.heappop(min_heap)
			elif num == '1':
				while max_heap and not visited[max_heap[0][1]]:
					heapq.heappop(max_heap)
				if max_heap:
					visited[max_heap[0][1]] = False
					heapq.heappop(max_heap)
	# 쓰레기 모두 제거
	while min_heap and not visited[min_heap[0][1]]:
		heapq.heappop(min_heap)
	while max_heap and not visited[max_heap[0][1]]:
		heapq.heappop(max_heap)

	if min_heap and max_heap:
		print(-1 * max_heap[0][0], min_heap[0][0])
	else:
		print("EMPTY")
