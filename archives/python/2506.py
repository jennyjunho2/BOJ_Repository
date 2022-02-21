N = int(input())
nums = list(map(int, input().split()))

streak = 1
result = 0
for i in range(len(nums)):
    if nums[i] == 1:
        result += streak
        streak += 1
    else:
        streak = 1
print(result)