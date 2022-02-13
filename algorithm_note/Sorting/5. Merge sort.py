# 비교 횟수 = N*(N+1) // 2
# 최악의 경우 : O(nlogn)
# 최고의 경우 : O(nlogn)
# 평균적인 경우 : O(nlogn)

# Divide-and-Conquer & Recursion 방법 사용

def merge_sort(array):
    if len(array) <= 1:
        return
    
    # mid : 배열의 중간값
    mid = len(array) // 2
    # 배열을 두 개로 쪼갠다.
    left, right = array[:mid], array[mid:]
    # 이 두개를 merge sort의 인자로 넣어준다.
    merge_sort(left)
    merge_sort(right)

    i = j = k = 0
    # i : left의 index
    # j : right의 index
    # k : 원래 배열(array)의 index

    # (실제 정렬이 일어나는 시점)
    while i < len(left) and j < len(right):
        # 만약 left의 원소가 더 작으면 이를 원래 배열에 넣어줌
        if left[i] < right[j]:
            array[k] = left[i]
            i += 1
        # 반대의 경우엔 해당하는 원소를 원래 배열에 넣어줌
        else:
            array[k] = right[j]
            j += 1
        k += 1
    
    # 남은 원소가 있으면 이를 array 안에 다시 넣어줌
    while i < len(left):
        array[k] = left[i]
        i += 1
        k += 1
    
    while j < len(right):
        array[k] = right[j]
        j += 1
        k += 1

arr = [7, 5, 9, 1, 4, 2, 6]
merge_sort(arr)
print(arr)