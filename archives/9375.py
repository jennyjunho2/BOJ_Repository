import sys
input = sys.stdin.readline
from functools import reduce

T = int(input())
for _ in range(T):
	clothes = {}
	n = int(input())
	if n == 0:
		print(0)
	else:
		for _ in range(n):
			name, kind = map(str, input().split())
			if kind not in clothes.keys():
				clothes[kind] = 1
			else:
				clothes[kind] += 1
		print(reduce((lambda x, y : x*y), map(lambda x : x+1, clothes.values()))-1)