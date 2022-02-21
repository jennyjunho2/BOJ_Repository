import sys
input = sys.stdin.readline

N = int(input())
nums = [list(map(int, input().split())) for _ in range(N)]
nums.sort(key = lambda x : (x[1], x[0]))
cnt = 1
end = nums[0][1]
for i in range(1, N):
    if nums[i][0] >= end:
        cnt += 1
        end = nums[i][1]
print(cnt)