import sys
input = sys.stdin.readline

N, M = map(int, input().split())
if len(str(N)) * N > M:
    print((str(N) * N)[:M])
else:
    print(str(N) * N)