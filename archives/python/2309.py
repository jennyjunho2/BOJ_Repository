from itertools import combinations

dwarfs = []
for _ in range(9):
	dwarfs.append(int(input()))

for i in list(combinations(dwarfs, 2)):
	if sum(i) == (sum(dwarfs) - 100):
		dwarfs.remove(i[0])
		dwarfs.remove(i[1])

for j in sorted(dwarfs):
	print(j)