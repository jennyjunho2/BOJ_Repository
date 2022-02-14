import sys
input = sys.stdin.readline

for _ in range(3):
    h1, m1, s1, h2, m2, s2 = map(int, input().split())
    work = (3600*h2 + 60*m2 + s2) - (3600*h1 + 60*m1 + s1)
    h, rem = divmod(work, 3600)
    m, rem2 = divmod(rem, 60)
    print(h, m, rem2)