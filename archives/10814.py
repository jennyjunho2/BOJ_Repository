N = int(input())
arr = []
for _ in range(N):
	age, name = input().split()
	arr.append((int(age), str(name)))

arr.sort(key=lambda x: x[0])
for i in arr:
	print(" ".join(map(str, i)))