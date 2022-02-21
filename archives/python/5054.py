t = int(input())
for _ in range(t):
    n = int(input())
    nums = sorted(list(map(int, input().split())))
    distance = 0
    for i in range(len(nums) - 1):
        distance += nums[i+1] - nums[i]
    print(distance*2)