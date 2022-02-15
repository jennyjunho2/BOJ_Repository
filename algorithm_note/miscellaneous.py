#n중 리스트 반시계 방향으로 회전
def rotate(arr):
    return list(zip(*arr[::-1]))

print(rotate([[1, 2, 3],
              [4, 5, 6],
              [7, 8, 9]]))

# 진법 변환 방법(~36진법까지)
# return 문을 잘 살펴보자 (return문에 or, and가 있는 경우)
def baseN(num,b):
    words ="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    return ((num == 0) and words[0]) or (baseN(num // b, b).lstrip('0') + words[num % b])