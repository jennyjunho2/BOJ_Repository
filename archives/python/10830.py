import sys

input = sys.stdin.readline


def mul(mat1, mat2):
	mat3 = [[0] * N for _ in range(N)]
	for i in range(N):
		for j in range(N):
			for k in range(N):
				mat3[i][j] += (mat1[i][k] * mat2[k][j]) % 1000
	return mat3

N, B = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(N)]
B = bin(B)[2:]

eye = [[1 if i == j else 0 for i in range(N)] for j in range(N)]

result = eye
for i in range(len(B)):
	if B[-i - 1] == '1':
		tmp = matrix
		while i > 0:
			tmp = mul(tmp, tmp)
			i -= 1
		result = mul(result, tmp)

for row in result:
	print(" ".join(map(str, map(lambda x: x % 1000, row))))