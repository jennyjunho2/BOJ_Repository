import sys
input = sys.stdin.readline

from decimal import *
PI = Decimal('3.141592653589793238462643383279502884197169399375105820974944')

getcontext().prec = 50
getcontext().rounding = ROUND_HALF_UP

def lsin(x):
    x %= (2*PI)
    getcontext().prec += 2
    i, lasts, s, fact, num, sign = 1, 0, x, 1, x, 1
    while s != lasts:
        lasts = s
        i += 2
        fact *= i * (i-1)
        num *= x*x
        sign *= -1
        s += num / fact * sign
    getcontext().prec -= 2
    return +s

a, b, c = map(Decimal, input().split())
left, right = (c-b)/a, (c+b)/a
while (right-left > Decimal(1e-22)):
    mid = (left+right) / 2
    if a*mid + b * lsin(mid) - c > 0:
        right = mid
    else:
        left = mid

print(round(right, 6))