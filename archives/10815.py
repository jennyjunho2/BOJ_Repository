import sys

N = int(sys.stdin.readline().strip())
cards = set(map(int, sys.stdin.readline().split()))
M = int(sys.stdin.readline().strip())
nums = set(map(int, sys.stdin.readline().split()))

for j in nums:
    if j in cards:
        print(1)
    else:
        print(0)