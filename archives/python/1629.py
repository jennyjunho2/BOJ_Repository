# (A * B) mod C = (a mod C * b mod C) mod C
# (A * B) % C = (A % C * B % C) % C
#

import sys
input = sys.stdin.readline

def pow_modified(A, B, C):
    if B == 1:
        return A % C
    else:
        temp = pow_modified(A, B // 2, C)
        if B % 2 == 1:
            return temp * temp * A % C
        else:
            return temp * temp % C

A, B, C = map(int, input().split())
print(pow_modified(A, B, C))