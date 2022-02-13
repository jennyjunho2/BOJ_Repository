# 시간복잡도 : O(N+K)
# N : 배열의 원소의 개수
# k : 입력 원소의 범위(최대 - 최소)

# Hashing 방법 사용

def count_sort(array):
    # 배열의 최댓값, 최솟값을 구하고
    max_num, min_num = max(array), min(array)
    # 이에 따라 배열의 원소의 범위를 구함.
    length = max_num - min_num + 1
    # count : 개수 세기를 위한 배열
    count = [0] * length
    # output : 결과가 될 배열
    output = [0] * len(array)
    
    # 각 원소에 대하여 개수 세기 시행
    for i in range(len(array)):
        count[array[i] - min_num] += 1
    
    # 이후 누적 합을 통해 실질적인 index를 만들어줌
    for i in range(1, len(count)):
        count[i] += count[i-1]
    
    # output 배열 완성
    for i in range(len(array) - 1, -1, -1):
        output[count[array[i] - min_num] -1] = array[i]
        count[array[i]-min_num] -= 1

    return output