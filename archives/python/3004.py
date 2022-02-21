import sys
input = sys.stdin.readline

N = int(input())
print((N//2+1)**2 if N % 2 == 0 else ((N+1) // 2) * ((N+3) // 2))