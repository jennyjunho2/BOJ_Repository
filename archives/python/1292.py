import sys

a, b = map(int, sys.stdin.readline().strip().split())

num_list = [0]
cnt = 1
for i in range(46):  # 1000 < 46*47/2
	for j in range(i):
		num_list.append(i)

print(sum(num_list[a:b + 1]))