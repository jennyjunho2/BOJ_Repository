import sys
input = sys.stdin.readline

N = int(input())
people = [tuple(map(int, input().split())) for x in range(N)]
for person in people:
	rank = 1
	for foo in people:
		if person[0] < foo[0] and person[1] < foo[1]:
			rank += 1
	print(rank, end =' ')
