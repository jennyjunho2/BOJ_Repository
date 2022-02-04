# dict(hashmap)

import sys
input = sys.stdin.readline

N, M = map(int, input().split())
table = dict()
for _ in range(N):
	site, password = map(str, input().split())
	table[site] = password

for _ in range(M):
	site = str(input()).rstrip()
	print(table[site])