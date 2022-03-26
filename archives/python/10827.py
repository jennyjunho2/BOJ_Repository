import sys
input = sys.stdin.readline

from decimal import *
a, b = input().split()

getcontext().prec = 1101
print("{:f}".format(Decimal(a) ** int(b)))