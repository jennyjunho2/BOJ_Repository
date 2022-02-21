import sys
input = sys.stdin.readline

a, b = map(int, input().split())
a1, a2 = divmod(a, 4)
if a2 == 0:
    a1 -= 1
    a2 = 4
b1, b2 = divmod(b, 4)
if b2 == 0:
    b1 -= 1
    b2 = 4

print(abs(a1-b1) + abs(a2-b2))