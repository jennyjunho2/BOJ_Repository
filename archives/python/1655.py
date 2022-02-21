import sys
input = sys.stdin.readline

import heapq
left = []
right = []
N = int(input())
for _ in range(N):
    x = int(input())
    if len(left) == len(right):
        heapq.heappush(left, (-x, x))
    else:
        heapq.heappush(right, (x, x))

    if right and left[0][1] > right[0][1]:
        left_num = heapq.heappop(left)[1]
        right_num = heapq.heappop(right)[1]
        heapq.heappush(left, (-right_num, right_num))
        heapq.heappush(right, (left_num, left_num))

    print(left[0][1])