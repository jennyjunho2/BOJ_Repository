a = []
while 1:
	try:
		a.append(int(input()))
	except EOFError:
		break

for num in a:
	i = 1
	while True:
		if (i % num == 0):
			print(len(str(i)))
			break
		else:
			i = i * 10 + 1