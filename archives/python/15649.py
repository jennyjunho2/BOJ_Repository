import sys
input = sys.stdin.readline

from itertools import permutations
N, M = map(int, input().split())
print("\n".join(map(" ".join, permutations(map(str, range(1, N+1)), M))))