import sys
input = sys.stdin.readline

T = int(input())
for _ in range(T):
    n = int(input())
    doors = [False] + [True] * (n)
    for i in range(2, n+1):
        for j in range(i, n+1, i):
            if doors[j]:
                doors[j] = False
            else:
                doors[j] = True
    print(sum(doors * 1))