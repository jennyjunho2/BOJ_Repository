import sys

N = int(input())
arr = []
for _ in range(N):
    a, b = map(int, input().split())
    arr.append((a, b))

arr.sort(key = lambda x: (x[0], x[1]))
for i in arr:
    print(" ".join(map(str, i)))