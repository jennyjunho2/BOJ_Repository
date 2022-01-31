import math

T = int(input())
for _ in range(T):
    x1, y1, r1, x2, y2, r2 = map(int, input().split())
    if (x1 == x2) and (y1 == y2):
        if (r1 == r2):
            print(-1)
        else:
            print(0)
    else:
        d1 = math.sqrt((x1-x2)**2 + (y1-y2)**2)
        if d1 < r1 + r2 and d1 > abs(r1 - r2):
            print(2)
        elif d1 == r1 + r2 or d1 == abs(r1 - r2):
            print(1)
        else:
            print(0)