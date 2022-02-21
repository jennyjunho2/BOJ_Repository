arr = []
K = int(input())
for _ in range(K):
	a = int(input())
	if (a == 0):
		del arr[-1]
	else:
		arr.append(a)

print(sum(arr))