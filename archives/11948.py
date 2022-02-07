import sys
input = sys.stdin.readline

A = int(input())
B = int(input())
C = int(input())
D = int(input())
E = int(input())
F = int(input())
print(sum(sorted([A, B, C, D])[1:]) + max([E, F]))