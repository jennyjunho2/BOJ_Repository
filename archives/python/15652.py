import sys
input = sys.stdin.readline

from itertools import combinations_with_replacement
N, M = map(int, input().split())
for i in combinations_with_replacement([x for x in range(1, N+1)], M):
    print(" ".join(map(str, i)))