# Not recursive
# 재귀도 가능하지만, 수학적으로 구현 가능하면 하자.

import sys
input = sys.stdin.readline

N, r, c = map(int, input().split())
cnt = 0
while N > 0:
    size = (2 ** (N-1))
    if r < size and c < size:
        pass
    elif r < size and c >= size:
        cnt += (size ** 2)
        c -= size
    elif r >= size and c < size:
        cnt += (size ** 2) * 2
        r -= size
    elif r >= size and c >= size:
        cnt += (size ** 2) * 3
        r -= size
        c -= size
    N -= 1

print(cnt + 2 * r + c)
