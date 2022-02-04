import sys
input = sys.stdin.readline

N, a, b = map(int, input().split())
cnt = 0
if a > N or b > N:
	print(-1)
else:
	while a != b:
		a = (a+1) // 2
		b = (b+1) // 2
		cnt += 1
	print(cnt)