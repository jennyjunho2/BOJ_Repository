T = int(input())
for _ in range(T):
    N = int(input())
    C = 0
    G = 0
    for _ in range(N):
        c, g = map(float, input().split())
        C += c
        G += c*g
    print(int(C), format(G / C, '.1f'))