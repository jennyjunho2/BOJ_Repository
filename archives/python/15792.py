import sys
input = sys.stdin.readline

from decimal import *
A, B = input().split()

getcontext().prec = 1001
print("{:f}".format(Decimal(A) / int(B)))