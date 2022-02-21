import sys
input = sys.stdin.readline

S, C = map(int, input().split())
nums = [int(input()) for _ in range(S)]
start, end = 1, max(nums)
result = 0

# Binary search
while start <= end:
	mid = max((start + end) // 2, 1)
	cnt = 0
	for num in nums:
		cnt += num // mid
	if cnt >= C:
		result = max(result, mid)
		start = mid + 1
	else:
		end = mid - 1
print(sum(nums) - C*result)

