# 비교 횟수 = N*(N+1) // 2
# 시간 복잡도
# -> Heapify : O(logN)
# -> Heapsort : O(N)

# Heap 구조 사용

def heapify(array, n, i):
    # root 노드를 largest로 놓음
    largest = i
    left = 2*i + 1
    right = 2*i + 2

    # root의 left node가 존재하는지, 또 root보다 큰지 조사
    if left < n and array[largest] < array[left]:
        # 만약 root보다 클 경우 largest를 left node로 놓음
        largest = left
    # 같은 방법으로 right node도 검사
    if right < n and array[largest] < array[right]:
        largest = right

    # max heap 구조를 위해 root 와 자식 node를 필요할 경우 교환
    if largest != i:
        array[i], array[largest] = array[largest], array[i]
        heapify(array, n, largest)

def heap_sort(array):
    n = len(array)
    # array를 max heap 구조로 바꿈
    for i in range(n//2 -1, -1, -1):
        heapify(array, n, i)
    
    # 한 원소씩 배열에서 swap 해줌
    for i in range(n-1, 0, -1):
        array[i], array[0] = array[0], array[i]
        # 다시 max heap 구조로 바꾸어줌
        heapify(array, i, 0)

arr = [7, 5, 9, 1, 4, 2, 6]
heap_sort(arr)
print(arr)
