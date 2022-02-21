import sys
input = sys.stdin.readline

import heapq
def solution():
    queue = []
    N = int(input())
    for _ in range(N):
        x = int(input())
        if x != 0:
            heapq.heappush(queue, (abs(x), x))
        else:
            if not queue:
                print(0)
                continue
            else:
                v = heapq.heappop(queue)
                print(v[1])

if __name__ == "__main__":
    solution()