import sys
input = sys.stdin.readline

TC = int(input())
for _ in range(TC):
    x, y = map(int, input().split())
    print(x+y)