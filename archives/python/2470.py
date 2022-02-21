N = int(input())
nums = sorted(list(map(int, input().split())))

first, end = 0, len(nums) - 1
result = nums[0] + nums[end]
final_left, final_right = 0, len(nums) - 1
# two pointers
while first < end:
	integer = nums[first] + nums[end]
	if abs(integer) < abs(result):
		result = integer
		final_left, final_right = first, end
		if result == 0:
			break

	if integer >= 0:
		end -= 1
	else:
		first += 1

print(nums[final_left], nums[final_right])