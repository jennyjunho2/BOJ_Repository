import sys
input = sys.stdin.readline

M = int(input())
S = set()
for _ in range(M):
	command = input().split()
	if command[0] == "add":
		x = int(command[1])
		S.add(x)
	elif command[0] == "remove":
		x = int(command[1])
		if x in S:
			S.remove(x)
		else:
			continue
	elif command[0] == "check":
		x = int(command[1])
		if x in S:
			print(1)
		else:
			print(0)
	elif command[0] == "toggle":
		x = int(command[1])
		if x in S:
			S.remove(x)
		else:
			S.add(x)
	elif command[0] == "all":
		S = set([1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
				11, 12, 13, 14, 15, 16, 17, 18, 19, 20])
	elif command[0] == "empty":
		S = set()