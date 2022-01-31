input()
nums = input().split()
v = input()
result = 0
for i in nums:
    if i == v:
        result += 1

print(result)