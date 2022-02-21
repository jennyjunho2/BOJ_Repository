import sys
input = sys.stdin.readline

from math import gcd
N = int(input())
nums = list(map(int, input().split()))
for i in range(1, len(nums)):
    GCD = gcd(nums[0], nums[i])
    print(str(nums[0] // GCD) + "/" + str(nums[i] // GCD))