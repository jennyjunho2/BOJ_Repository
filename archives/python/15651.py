import sys
input = sys.stdin.readline

from itertools import product
N, M=map(int,input().split())
print('\n'.join((map(' '.join, product(map(str, [x for x in range(1, N+1)]), repeat = M)))))