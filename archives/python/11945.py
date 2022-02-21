import sys
input = sys.stdin.readline

N, M = map(int, input().split())
for _ in range(N):
    word = input().strip()
    print(word[::-1])