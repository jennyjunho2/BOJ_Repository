# 왜 이분탐색인지 생각해보자...

import sys
input = sys.stdin.readline

N = int(input())
k = int(input())
result = 0
left, right = 1, k
while left <= right:
    cnt = 0
    mid = (left + right) // 2
    for i in range(1, N+1):
        cnt += min(N, mid // i)
    
    if cnt >= k:
        result = mid
        right = mid - 1
    else:
        left = mid + 1
print(result)