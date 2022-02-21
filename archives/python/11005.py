import sys
input = sys.stdin.readline

def baseN(num,b):
    words ="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    return ((num == 0) and words[0]) or (baseN(num // b, b).lstrip('0') + words[num % b])

N, B = map(int, input().split())
print(baseN(N, B))