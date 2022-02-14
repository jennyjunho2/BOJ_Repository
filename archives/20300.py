import sys
input = sys.stdin.readline

N = int(input())
nums = sorted(list(map(int, input().split())))
if N % 2 == 0:
    result = 0
    for i in range(N // 2):
        result = max(result, nums[i] + nums[-i-1])
    print(result)
else:
    result = nums[-1]
    for i in range(N // 2):
        result = max(result, nums[i] + nums[-i-2])
    print(result)