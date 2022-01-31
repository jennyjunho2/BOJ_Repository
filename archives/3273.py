import sys
input = sys.stdin.readline

n = int(input())
nums = sorted(list(map(int, input().split())))
x = int(input())

#Binary Search
first, end = 0, n-1
cnt = 0
while first < end:
    integer = nums[first] + nums[end]
    if x > integer:
        first += 1
        continue
    elif x == integer:
        cnt += 1
    end -= 1

print(cnt)