import sys
input = sys.stdin.readline

a, b = map(int, input().split())
A = set(map(int, input().split()))
B = set(map(int, input().split()))

num1 = len((A^B)&A)
num2 = len((A^B)&B)
print(num1 + num2)