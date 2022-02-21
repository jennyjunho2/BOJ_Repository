import sys
input = sys.stdin.readline

def func(num):
    cnt = 0
    for i in range(1, int(num**0.5) + 1):
        if num % i == 0:
            cnt += 1
    return cnt

n = int(input())
print(sum(map(func, [x for x in range(1, n+1)])))