import sys
input = sys.stdin.readline

N, M = map(int, input().split())
nums = [x for x in range(N+1)]
for _ in range(M):
   i, j = map(int, input().split())
   nums[i], nums[j] = nums[j], nums[i]
print(" ".join(map(str, nums[1:])))