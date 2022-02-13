import sys
input = sys.stdin.readline

from itertools import accumulate
N = input()
print(sum(accumulate(sorted(map(int, input().split())))))