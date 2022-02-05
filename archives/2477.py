import sys
input = sys.stdin.readline

K = int(input())
nums = [list(map(int, input().split())) for _ in range(6)]
width, height = 0, 0
width_idx, height_idx = 0, 0
for i in range(6):
	if nums[i][0] == 1 or nums[i][0] == 2:
		if width < nums[i][1]:
			width = nums[i][1]
			width_idx = i
	else:
		if height < nums[i][1]:
			height = nums[i][1]
			height_idx = i
width_min = abs(nums[(width_idx - 1) % 6][1] - nums[(width_idx + 1) % 6][1])
height_min = abs(nums[(height_idx - 1) % 6][1] - nums[(height_idx + 1) % 6][1])
print((width * height - width_min * height_min) * K)