import sys
input = sys.stdin.readline

from itertools import accumulate
N, M = map(int, input().split())
partials = [0] + list(accumulate(map(int, input().split())))
ptr1, ptr2 = 1, 2
cnt = 0
if N == 1:
    print(0 if partials[-1] != M else 1)
    exit()

while ptr2 <= N:
    partial_sum = partials[ptr2] - partials[ptr1-1]
    if partial_sum < M:
        ptr2 += 1
    elif partial_sum > M:
        ptr1 += 1
    else:
        cnt += 1
        ptr1 += 1
        ptr2 += 1
print(cnt)