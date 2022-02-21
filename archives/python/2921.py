N = int(input())
nums = [3]
for i in range(1, N):
    nums.append(nums[i-1] + int(1.5*(i+1)*(i+2)))

print(nums[-1])