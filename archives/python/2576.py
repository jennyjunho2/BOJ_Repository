nums = []
for _ in range(7):
	nums.append(int(input()))

odds = sorted([x for x in nums if x % 2 != 0])
if not odds:
	print(-1)
else:
	print(sum(odds))
	print(odds[0])