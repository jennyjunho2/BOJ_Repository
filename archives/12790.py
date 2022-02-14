import sys
input = sys.stdin.readline

T = int(input())
for _ in range(T):
    a, b, c, d, e, f, g, h = map(int, input().split())
    w = max(a + e, 1)
    x = max(b + f, 1)
    y = max(c + g, 0)
    z = d + h
    print(w + 5*x + 2*y + 2*z)