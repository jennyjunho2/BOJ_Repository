import sys
input = sys.stdin.readline

T = int(input())
marble = [1, 0, 0]
for _ in range(T):
    a, b = map(int, input().split())
    marble[a-1], marble[b-1] = marble[b-1], marble[a-1]
print(marble.index(1) + 1)