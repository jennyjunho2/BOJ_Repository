import sys
input = sys.stdin.readline

def LIS(arr):
    N = len(arr)
    arr = [0] + arr
    dp = [1] * (N+1)
    for i in range(1, N+1):
        for j in range(1, i):
            if arr[i] < arr[j]:
                dp[i] = max(dp[i], dp[j] + 1)
    return max(dp)

N = int(input())
nums = list(map(int, input().split()))
print(LIS(nums))