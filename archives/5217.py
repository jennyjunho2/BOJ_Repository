T = int(input())
for _ in range(T):
	nums = []
	n = int(input())
	if n == 1:
		print("Pairs for 1:")
	elif n == 2:
		print("Pairs for 2:")
	else:
		for i in range(1, (n // 2) + 1):
			if i < (n - i):
				nums.append(f"{i} {n - i}")
		result = f"Pairs for {n}: "
		for num in nums:
			result += f"{num}, "
		print(result[:-2])
