import math

A, B, C = map(int, input().split())
num = A / (C-B) if (B != C) else -1
if (num <=0) : print("-1")
else:
    if (num.is_integer() == True):
        print(f"{int(num+1)}")
    else:
        print(f"{math.ceil(num)}")