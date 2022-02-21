# Pypy3로 안하면 TLE남
# Bubble sort가 느리다( O(N^2) )라는 것을 보여주는 좋은 예제

import sys
input = sys.stdin.readline

def bubble_sort(N, K, A):
	if K > (N*(N-1)//2):
		print(-1)
		return
	else:
		cnt = 0
		for i in range(N-1, 0, -1):
			for j in range(i):
				if A[j] > A[j + 1]:
					A[j], A[j + 1] = A[j + 1], A[j]
					cnt += 1
				if cnt == K:
					print(" ".join(map(str, A)))
					return
		print(-1)
		return

N, K = map(int, input().split())
A = list(map(int, input().split()))
bubble_sort(N, K, A)
