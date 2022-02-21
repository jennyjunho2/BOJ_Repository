import sys
input = sys.stdin.readline

N = int(input())
i = 1
cnt = 0
while i <= N:
    cnt += (N - i + 1)
    i *= 10
print(cnt)