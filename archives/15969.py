import sys
input = sys.stdin.readline

N = int(input())
nums = list(sorted(map(int, input().split())))
print(nums[-1] - nums[0])