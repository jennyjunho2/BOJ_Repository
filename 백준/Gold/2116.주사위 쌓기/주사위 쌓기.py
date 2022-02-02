import sys
input = sys.stdin.readline

def remove_front(nums, index):
	if index == 0 or index == 5:
		return nums[1:5]
	elif index == 1 or index == 3:
		return nums[0:1] + nums[2:3] + nums[4:6]
	elif index == 2 or index == 4:
		return nums[0:2] + nums[3:4] + nums[5:6]

T = int(input())
dice = [list(map(int, input().split())) for _ in range(T)]
result = 0
for i in range(6):
	num = 0
	front = dice[0][i]
	num += max(remove_front(dice[0], i))
	for j in range(1, T):
		next_bottom = dice[j].index(front)
		num += max(remove_front(dice[j], next_bottom))
		if next_bottom == 0: front = dice[j][5]
		elif next_bottom == 1: front = dice[j][3]
		elif next_bottom == 2: front = dice[j][4]
		elif next_bottom == 3: front = dice[j][1]
		elif next_bottom == 4: front = dice[j][2]
		elif next_bottom == 5: front = dice[j][0]
	result = max(result, num)
print(result)