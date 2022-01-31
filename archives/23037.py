nums = input()
result = 0
for num in map(int, nums):
    result += num**5
print(result)