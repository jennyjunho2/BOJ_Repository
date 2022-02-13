# 비교 횟수 = N*(N+1) // 2
# 최악의 경우 : 배열이 역순일 때 O(N^2)
# 최고의 경우 : 배열이 정순일 때 O(N)
# 평균적인 경우 : O(N^2)

arr = [7, 5, 9, 1, 4, 2, 6]

for i in range(len(arr)):
    # min_idx : 가장 작은 원소
    min_idx = i
    # i보다 큰 인덱스의 원소들을 탐색
    for j in range(i+1, len(arr)):
        # 만약 arr[min_idx]보다 큰 값이 존재한다면...
        if arr[min_idx] > arr[j]:
            # 그 index를 min_idx로 업데아트
            min_idx = j
    # arr[i] 이후의 원소 중 가장 큰 원소와 arr[i] 간의 위치 교환
    arr[i], arr[min_idx] = arr[min_idx], arr[i]

print(arr)