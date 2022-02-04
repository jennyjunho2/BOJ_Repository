# 내장함수도 있지만, 원리는 알고 가자.

import sys
input = sys.stdin.readline

N, B = input().split()
B = int(B)
print(int(N, B))