import sys
input = sys.stdin.readline

for _ in range(int(input())):
	a, b = map(int, input().split())
	print(1 if a+b != 1 else 2)