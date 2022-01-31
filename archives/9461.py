#파도반 수열

import sys
input = sys.stdin.readline

T = int(input())
nums = [0]*101
nums[0], nums[1], nums[2], nums[3], nums[4] = 1, 1, 1, 2, 2
for i in range(5, 100):
    nums[i] = nums[i-1]+nums[i-5]

for _ in range(T):
    print(nums[int(input())-1])