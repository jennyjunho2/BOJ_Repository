import sys

arr = list(map(int, sys.stdin.readline().strip().split()))
print(sorted(arr)[1])