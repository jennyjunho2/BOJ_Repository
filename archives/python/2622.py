num = int(input())
counter = 0
for i in range(1, num + 1):
	for j in range(i, num - i + 1):
		k = num - i - j
		if ((i <= j) and (j <= k) and (i + j > k)):
			counter += 1
print(counter)
