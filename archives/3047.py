import sys
input = sys.stdin.readline

A, B, C = sorted(map(int, input().split()))
print(input().strip().replace("A", str(A) + " ").replace("B", str(B) + " ").replace("C", str(C) + " "))