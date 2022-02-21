import sys
input = sys.stdin.readline

T = int(input())
for _ in range(T):
	n = int(input())
	print(" ".join([str(x) for x in range(len(bin(n)[2:])) if bin(n)[2:][::-1][x] == '1']))