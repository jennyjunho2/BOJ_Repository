N = int(input())

if (N == 1):
	print("")
else:
	div = 2
	while div <= N:
		if N % div == 0:
			print(div)
			N = N // div
		else:
			div += 1
