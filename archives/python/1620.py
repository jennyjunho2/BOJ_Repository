import sys
input = sys.stdin.readline

N, M = map(int, input().split())

pokemon = {}
for i in range(1, N+1):
	name = input().strip()
	pokemon[str(i)] = name
	pokemon[name] = i

for j in range(M):
	keyword = input().strip()
	print(pokemon[keyword])