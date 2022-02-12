# LIS(Longest Increasin Sequence)
# 가장 긴 증가하는 수열의 길이는?
# DP 방법과 DP + Binary Search 방법이 존재

# 1번째 방법 : DP만 사용
# 시간 복잡도 : O(N^2)
def LIS(arr):
    N = len(arr)
    dp = [1] * (N+1)
    for i in range(1, N+1):
        for j in range(1, i):
            if arr[i] > arr[j]:
                dp[i] = max(dp[i], dp[j] + 1)
    print(max(dp))

# 2번째 방법: DP + 이진탐색 사용
# 시간 복잡도 : O(NlogN) - 이진 탐색으로 탐색 시간 감소
# 파이썬에는 bisect 라이브러리를 활용하여 이진 탐색이 가능하다.
# bisect.bisect_left(arr, x) : arr가 정렬된 배열일 때 x값이 들어갈 위치 반환
import bisect
def LIS2(arr):
    N = len(arr)
    dp = [arr[0]]
    for i in range(N):
        if arr[i] > dp[-1]:
            dp.append(arr[i])
        else:
            idx = bisect.bisect_left(dp, arr[i])
            dp[idx] = arr[i]
    return len(dp)

# print(LIS2([10, 20, 10, 30, 20, 50]))
# output : 4