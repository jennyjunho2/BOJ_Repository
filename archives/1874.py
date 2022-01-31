from collections import deque
import sys

# input = sys.stdin.readline

n = int(input())
nums = deque([x for x in range(1, n + 1)])
stack = [0]
result = []

for _ in range(n):
	a = int(input())
	b = len(nums)
	if a == stack[-1]:
		stack.pop()
		result.append('-')
	else:
		for _ in range(b):
			if nums[0] <= a:
				stack.append(nums[0])
				nums.popleft()
				result.append('+')
			else:
				break
		if a != stack[-1]:
			print("NO")
			exit()
		else:
			stack.pop()
			result.append('-')

print("\n".join(result))