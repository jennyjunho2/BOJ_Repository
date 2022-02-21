import sys
input = sys.stdin.readline

from itertools import zip_longest
A = list(input().strip())
B = list(input().strip())
C = list(input().strip())
D = list(input().strip())
E = list(input().strip())
print("".join(map("".join, list(zip_longest(A, B, C, D, E, fillvalue = " ")))).replace(" ", ""))