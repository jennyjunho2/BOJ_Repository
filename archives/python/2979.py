import sys
input = sys.stdin.readline

A, B, C = map(int, input().split())
parking = [0]*100
for _ in range(3):
    a, b  = map(int, input().split())
    for i in range(a-1, b-1):
        parking[i] += 1

print(A * parking.count(1) + 2 * B * parking.count(2) + 3 * C * parking.count(3))