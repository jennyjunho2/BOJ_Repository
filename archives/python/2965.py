import sys
input = sys.stdin.readline

A, B, C = map(int, input().split())
cnt = 0
while True:
    if B-A == 1 and C-B == 1:
        break
    left = B - A
    right = C - B
    if left < right:
        A = B
        B += 1
    else:
        C = B
        B -= 1
    cnt += 1
print(cnt)