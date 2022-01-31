from itertools import permutations

N, K = map(int, input().split())
A = list(map(int, input().split()))
cnt = 0

for case in permutations(A):
	passing = True
	weight = 500
	for num in case:
		weight = weight - K + num
		if weight < 500:
			passing = False
	if passing is True:
		cnt += 1

print(cnt)