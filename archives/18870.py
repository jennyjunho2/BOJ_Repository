import sys
input = sys.stdin.readline

N = int(input())
nums = list(map(int, input().split()))
sorted_nums = sorted(set(nums))
book = {}
for idx, value in enumerate(sorted_nums):
	book[value] = idx

for num in nums:
	print(book[num], end = " ")