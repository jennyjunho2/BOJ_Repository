import sys
input = sys.stdin.readline

e, f, c = map(int, input().split())
nums = e+f
cnt = 0
while nums >= c:
    cnt += nums // c
    nums = nums // c + nums % c
print(cnt)