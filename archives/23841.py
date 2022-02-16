import sys
input = sys.stdin.readline

N, M = map(int, input().split())
graph = [input().strip() for _ in range(N)]
for row in graph:
    first, last = list(row[:M // 2]), list(row[M // 2:])
    for i in range(M//2):
        if first[i] != ".":
            last[-1-i] = first[i]
        
        if last[-1-i] != ".":
            first[i] = last[-1-i]
    print(*first, *last, sep = "")