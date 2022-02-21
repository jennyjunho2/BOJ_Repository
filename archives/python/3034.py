import sys
input = sys.stdin.readline

N, W, H = map(int, input().split())
for _ in range(N):
    num = int(input())
    if num <= (W**2 + H**2)**0.5:
        print("DA")
    else:
        print("NE")