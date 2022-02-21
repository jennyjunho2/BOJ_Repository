import math


def is_prime(num):
	if num == 1:
		return False
	else:
		root = int(math.sqrt(num))
		for i in range(2, root + 1):
			if num % i == 0:
				return False
		return True


M, N = map(int, input().split())
for i in range(M, N + 1):
	if (is_prime(i) == True):
		print(i)