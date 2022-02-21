import sys
input = sys.stdin.readline

a, b = map(int, input().split())
if a >= b and a % 2 == b % 2:
    print((a+b) // 2, (a-b) // 2)
else:
    print(-1)