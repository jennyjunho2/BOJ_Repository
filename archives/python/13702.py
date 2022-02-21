import sys
input = sys.stdin.readline

N, K = map(int, input().split())
nums = []
for _ in range(N):
    nums.append(int(input()))

start, end = 1, max(nums)
while start <= end:
    mid = (start + end) // 2
    cnt = 0
    for num in nums:
        cnt += num // mid
    
    if cnt >= K:
        start = mid + 1
    else:
        end = mid - 1
print(end)