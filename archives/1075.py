import sys
input = sys.stdin.readline

N = int(input())
F = int(input())
nums = [str(x) for x in range(100)]
nums[0] = "00"
for i in range(1, 10):
    nums[i] = "0" + str(i)
for i in range(len(nums)):
    new = int(str(N)[:-2] + nums[i])
    if new % F == 0:
        print(nums[i])
        break