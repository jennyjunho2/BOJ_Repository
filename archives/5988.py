import sys
input = sys.stdin.readline

N = int(input())
for _ in range(N):
    print("even" if int(input()) % 2 == 0 else "odd")