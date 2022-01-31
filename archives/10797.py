integer = int(input())
nums = list(map(int, input().split()))

cnt = 0
for num in nums:
    if integer == num:
         cnt += 1
print(cnt)