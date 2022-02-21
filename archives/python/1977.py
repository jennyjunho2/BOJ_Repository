import math

M = int(input())
N = int(input())
result = []
for i in range(math.ceil(math.sqrt(M)), math.floor(math.sqrt(N)) + 1):
	result.append(i ** 2)

if len(result) == 0:
	print(-1)
else:
	print(sum(result))
	print(result[0])