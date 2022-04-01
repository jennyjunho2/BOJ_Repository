import sys
input = sys.stdin.readline

A, B = map(int, input().split())

quotient, remainder = divmod(A, B)
if A != 0 and remainder < 0:
    quotient += 1
    remainder -= B
print(quotient)
print(remainder)