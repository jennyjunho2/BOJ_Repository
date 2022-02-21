import sys
input = sys.stdin.readline

from collections import Counter
N = int(input())
nums = [input().rstrip() for _ in range(N)]
print(sorted(Counter(nums).most_common(), key = lambda x : (-x[1], int(x[0])))[0][0])