import sys
input = sys.stdin.readline
from collections import deque

T = int(input())
for _ in range(T):
	N, M = map(int, input().split())
	queue = deque(list(map(int, input().split())))
	cnt = 0
	while (len(queue) > 0):
		max_num = max(queue)
		num = queue.popleft()
		M -= 1

		if max_num == num: # 중요도 가장 높은 것이 뽑힐 경우
			cnt += 1
			if M < 0: # 내가 원하는 숫자일 경우
				print(cnt) # ㅇㅋ
				break
		else:
			queue.append(num) # 다시 맨 뒤로
			if M < 0: # 내가 원하는 숫자
				M = len(queue) - 1 # 순서도 다시 맨 뒤로