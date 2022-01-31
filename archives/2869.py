import math

A, B, V = map(int, input().split())
ans = (V-B)/(A-B)
if ans.is_integer():
    print(int(ans))
else:
    print(int(ans)+1)