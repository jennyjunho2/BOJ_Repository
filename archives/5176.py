import sys
input = sys.stdin.readline

for _ in range(int(input())):
    P, M = map(int, input().split())
    occupied = [False] * M
    cnt = 0
    
    for _ in range(P):
        n = int(input())
        if occupied[n-1]:
            cnt += 1
        else:
            occupied[n-1] = True
    print(cnt)