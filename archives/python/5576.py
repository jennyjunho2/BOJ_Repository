import sys
input = sys.stdin.readline

W = sum(sorted([int(input()) for _ in range(10)], reverse= True)[:3])
K = sum(sorted([int(input()) for _ in range(10)], reverse = True)[:3])
print(W, K)