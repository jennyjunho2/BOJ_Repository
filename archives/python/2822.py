nums = []
for i in range(8):
	nums.append(int(input()))

sorted_nums = sorted(nums)
print(sum(sorted_nums[-5:]))
indexes = []
for num in sorted_nums[-5:]:
	indexes.append(nums.index(num) + 1)
indexes = list(map(str, indexes))
print(" ".join(sorted(indexes)))