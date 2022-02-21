import sys
input = sys.stdin.readline

def distance(x1, y1, x2, y2):
	return ((x1-x2)**2 + (y1-y2)**2)**(0.5)

T = int(input())
for _ in range(T):
	x1, y1, x2, y2 = map(int, input().split())
	n = int(input())
	cnt = 0
	for _ in range(n):
		cx, cy, r = map(int, input().split())
		start_in = distance(x1, y1, cx, cy) < r
		final_in = distance(x2, y2, cx, cy) < r
		if start_in: cnt += 1
		if final_in: cnt += 1
		if start_in and final_in: cnt -= 2
	print(cnt)