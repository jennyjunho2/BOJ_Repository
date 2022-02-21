import sys
input = sys.stdin.readline

from itertools import accumulate
N, M = map(int, input().split())
partials = [0] + list(accumulate(map(int, input().split())))
for _ in range(M):
	i, j = map(int, input().split())
	print(partials[j] - partials[i-1])