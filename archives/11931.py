import sys
input = sys.stdin.readline

N = int(input())
nums = sorted([int(input()) for _ in range(N)], reverse = True)
print("\n".join(map(str, nums)))