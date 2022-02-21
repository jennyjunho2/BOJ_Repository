import sys
input = sys.stdin.readline

from copy import deepcopy
S = input().strip()
S2 = deepcopy(S)
zeros = len([x for x in S.split("1") if x])
ones = len([x for x in S2.split("0") if x])
print(min(zeros, ones))