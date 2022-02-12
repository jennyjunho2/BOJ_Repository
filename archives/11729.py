import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

def hanoi(num, a, b):
	if num == 1:
		print(a, b)
	else:
		hanoi(num-1, a, 6-a-b)
		print(a, b)
		hanoi(num-1, 6-a-b, b)

N = int(input())
print(2**N - 1)
hanoi(N, 1, 3)