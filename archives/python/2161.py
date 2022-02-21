import sys
input = sys.stdin.readline

from collections import deque
N = int(input())
nums = deque([x for x in range(1, N+1)])
while nums:
    print(nums.popleft(), end = " ")
    nums.rotate(-1)