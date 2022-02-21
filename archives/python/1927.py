import sys
input = sys.stdin.readline

import heapq as hq
N = int(input())
q = []
for _ in range(N):
    x = int(input())
    if x:
        hq.heappush(q, x)
    else:
        if q:
            a = hq.heappop(q)
            print(a)
        else:
            print(0)