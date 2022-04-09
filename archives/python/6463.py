import sys
input = sys.stdin.readline

import math
while True:
    try:
        N = int(input())
        blank = 5-len(str(N))

        num = str(math.factorial(N))
        ptr = len(num)-1

        while True:
            if num[ptr] != "0":
                print(blank*" " + str(N) + " -> " + num[ptr])
                break
            else:
                ptr -= 1
    except:
        break