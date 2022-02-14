import sys
input = sys.stdin.readline

N, M = map(int, input().split())
ans = 0
prices = [list(map(int, input().split())) for _ in range(M)]

six_list = sorted(prices, key = lambda x : x[0])
one_list = sorted(prices, key = lambda x : x[1])

if six_list[0][0] <= 6 * one_list[0][1]:
    ans = six_list[0][0] * (N // 6) + one_list[0][1] * (N % 6)
    if six_list[0][0] < one_list[0][1] * (N % 6):
        ans = six_list[0][0] * (N // 6 + 1)
else:
    ans = one_list[0][1] * N
print(ans)