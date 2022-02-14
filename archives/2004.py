import sys
input = sys.stdin.readline

def find5(num):
    result = 0
    i = 5
    while i <= num:
        result += num // i
        i *= 5
    return result 

def find2(num):
    result = 0
    i = 2
    while i <= num:
        result += num // i
        i *= 2
    return result 

n, m = map(int, input().split())
print(min(find5(n) - find5(m) - find5(n-m), find2(n) - find2(m) - find2(n-m)))