import sys
input = sys.stdin.readline

def rev(num):
    return int(str(num)[::-1])

x, y = map(int, input().split())
print(rev(rev(x) + rev(y)))