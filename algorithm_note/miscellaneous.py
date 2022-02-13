#n중 리스트 반시계 방향으로 회전
def rotate(arr):
    return list(zip(*arr[::-1]))

print(rotate([[1, 2, 3],
              [4, 5, 6],
              [7, 8, 9]]))