import sys
input = sys.stdin.readline

T = int(input())
for _ in range(T):
    word = list(input().split())
    print(" ".join(map(lambda x : x[::-1], word)))