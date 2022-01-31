import sys

N = int(sys.stdin.readline().strip())
nums = [x for x in range(1, N+1)]
result = []

instructions = list(map(int, sys.stdin.readline().strip().split()))
pointer_index = 0
k = instructions.pop(pointer_index) # 풍선 속 숫자
result.append(nums.pop(pointer_index))

while len(nums) > 0:
	pointer_index = (pointer_index+k) % len(instructions) if (k < 0) else (pointer_index+(k-1)) % len(instructions)
	k = instructions.pop(pointer_index)
	result.append(nums.pop(pointer_index))

print(' '.join(map(str, result)))