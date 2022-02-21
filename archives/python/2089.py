import sys
input = sys.stdin.readline

N = int(input())
if not N:
    print(0)
    exit()
ans = ""
while N:
    if N % (-2):
        ans += '1'
        N = N // (-2) + 1
    else:
        ans += '0'
        N //= -2
print(ans[::-1])