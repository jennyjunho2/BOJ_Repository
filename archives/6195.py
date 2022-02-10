import sys
input = sys.stdin.readline

import heapq
def solution():
    N = int(input())
    if N == 1:
        print(int(input()))
        return
    
    nums = sorted([int(input()) for _ in range(N)])
    cnt = 0
    while len(nums) != 1:
        a = heapq.heappop(nums)
        b = heapq.heappop(nums)
        heapq.heappush(nums, a+b)
        cnt += (a+b)
    print(cnt)
    return

if __name__ == "__main__":
    solution()