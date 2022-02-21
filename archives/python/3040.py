nums = []
for _ in range(9):
    nums.append(int(input()))

initial_sum = sum(nums)
break_signal = False
for i in range(len(nums)):
    first = nums[i]
    for j in range(i+1, len(nums)):
        second = nums[j]
        if initial_sum - (first+second) == 100:
            nums.pop(j)
            nums.pop(i)
            for k in nums:
                print(k)
                break_signal = True
            break
    if break_signal:
        break