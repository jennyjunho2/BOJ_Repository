import sys
from math import ceil
input = sys.stdin.readline

N = int(input())
nums = list(map(int, input().split()))
size = int(input())
print(sum(map(lambda x : ceil(x / size), nums)) * size)