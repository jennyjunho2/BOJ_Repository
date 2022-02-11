# 비교 횟수 = (N * (N-1)) // 2
# 최악의 경우 
# 최고의 경우 
# 평균적인 경우를 비교하는게 의미가 없다... O(N^2)

def bubble_sort(array):
    # 마지막 원소부터 모든 원소에 대하여...
    for i in range(len(array)-1, 0, -1):
        # 첫번재 원소부터 i-1번째 원소까지...
        for j in range(i):
            # 만약 앞의 원소가 더 크다면...
            if array[j] > array[j+1]:
                # 두 원소의 위치를 바꾼다
                array[j], array[j+1] = array[j+1], array[j]

# for문 없는 bubble sort
def bubble_sort2(array):
    # 만약 원소가 0개 또는 1개일 경우...
    if len(array) <= 1:
        return array
    # 만약 원소가 2개일 경우...
    if len(array) == 2:
        # 두 원소의 크기를 비교해 
        return array if array[0] < array[1] else [array[1], array[0]]
    
    # 배열의 앞 두개의 원소 저장
    a, b = array[0], array[1]
    # 나머지 배열은 따로 저장
    rem = array[2:]

    res = []
    # 앞 두 원소 중 작은 원소를 앞에다 놓고 bubble sort 수행
    if a < b:
        res = [a] + bubble_sort2([b] + rem)
    else:
        res = [b] + bubble_sort2([a] + rem)
    # 마지막 원소를 제외하고 재귀적으로 bubble_sort 함수 호출
    return bubble_sort2(res[:-1]) + res[-1:]

arr = [7, 5, 9, 1, 4, 2, 6]
print(bubble_sort2(arr))