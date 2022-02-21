import sys
input = sys.stdin.readline

from itertools import accumulate
N, S = map(int, input().split())
partials = [0] + list(accumulate(map(int, input().split())))
ptr1, ptr2 = 1, 1
length = N
while ptr1 <= ptr2 and ptr2 <= N:
    partial_sum = partials[ptr2] - partials[ptr1 - 1]
    if partial_sum < S:
        ptr2 += 1
    elif partial_sum > S:
        length = min(length, ptr2 - ptr1 + 1)
        ptr1 += 1
    else:
        length = min(length, ptr2 - ptr1 + 1)
        ptr1 += 1
        ptr2 += 1
print(length if partials[-1] >= S else 0)