# 누적합은 accumulate를 활용하면 빠름

import sys
input = sys.stdin.readline
from itertools import accumulate

N, Q = map(int, input().split())
A = [0] + list(accumulate(sorted(map(int, input().split()))))
for _ in range(Q):
	L, R = map(int, input().split())
	print(A[R]-A[L-1])
