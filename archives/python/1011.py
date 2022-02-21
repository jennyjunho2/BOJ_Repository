import sys
input = sys.stdin.readline

for _ in range(int(input())):
	x, y = map(int, input().split())
	dis = y-x
	num = 1
	while True:
		if dis <= num**2:
			print(2*num-1)
			break
		elif dis <= num*(num+1):
			print(2*num)
			break
		num += 1