import sys
from collections import Counter

nums = []
for _ in range(10):
    nums.append(int(input()))

c = Counter(nums)
print(int(sum(nums) / len(nums)))
print(c.most_common(1)[0][0])