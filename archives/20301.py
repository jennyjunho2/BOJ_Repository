import sys
input = sys.stdin.readline

from collections import deque
N, K, M = map(int, input().split())
nums = deque([x for x in range(1, N+1)])
cnt = 0
rotate_left = 1
result = []
while nums:
    if rotate_left:
        nums.rotate(-(K-1))
        result.append(nums.popleft())
        cnt += 1
    else:
        nums.rotate(K)
        result.append(nums.popleft())
        cnt += 1
    if cnt == M:
        rotate_left = abs(rotate_left - 1)
        cnt = 0
print(*result, sep = '\n')