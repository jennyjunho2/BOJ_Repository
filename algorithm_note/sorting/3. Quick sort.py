# 비교 횟수 = 평균적으로 N번 비교
# 최악의 경우 : 리스트 분할이 불균형한 경우 O(N^2)
# 최고의 경우 : 리스트 분할이 가운데로 딱 잘라지는 경우 O(Nlog_2N) = O(NlogN)
# 평균적인 경우 : O(NlogN)

# Divide-and-Conquer & Recursion 개념이 들어감

def quick_sort(array, start, end):
    # 원소가 1개인 경우 종료 (탈출 조건)
    if start >= end:
        return 
    
    # 피벗은 첫번째 원소
    pivot = start
    left = start + 1
    right = end

    while left <= right:
        # 피벗보다 큰 데이터를 찾을때까지 반복
        while left <= end and array[left] <= array[pivot]:
            left += 1
        # 피벗보다 작은 데이터를 찾을때까지 반복
        while right > start and array[right] >= array[pivot]:
            right -= 1
        # 엇갈렸다면 작은 데이터와 피벗 교체
        if left > right:
            array[right], array[pivot] = array[pivot], array[right]
        # 엇갈리지 않았다면 작은 데이터와 큰 데이터 교체
        else:
            array[left], array[right] = array[right], array[left]
    
    # 이후 right를 기준으로 분할된 두 배열 재귀적으로 호출
    quick_sort(array, start, right - 1)
    quick_sort(array, right + 1, end)

# 조금 더 파이써-닉 하게, 다만 조금 비효율적
def quick_sort2(array):
    # 원소가 1개인 경우 종료 (탈출 조건)
    if len(array) <= 1:
        return array
    # 피벗은 첫번째 원소
    pivot = array[0]
    tails = array[1:]

    # pivot을 기준으로 left, right 분할
    left = [x for x in tails if x <= pivot]
    right = [x for x in tails if x > pivot]

    # 이후 pivot을 기준으로 분할된 두 배열 재귀적으로 호출
    return quick_sort2(left) + [pivot] + quick_sort2(right)

arr = [7, 5, 9, 1, 4, 2, 6]
quick_sort(arr)
print(quick_sort2(arr))