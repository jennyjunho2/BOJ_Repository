import sys
input = sys.stdin.readline

A, B = map(int, input().split())
print((A+B) * (abs(A-B)+1) // 2)