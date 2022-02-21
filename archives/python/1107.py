# product를 이용하여 경우의 수로 풀긴했지만, Python3의 경우 메모리 터짐
# repeat에 대한 고찰 필요
# 그냥 1~500000까지 돌려서 할 수도 있었음

import sys
input = sys.stdin.readline

from itertools import product
N = int(input())
M = int(input())
broken = list(map(int, input().split())) if M != 0 else []

not_broken = [str(x) for x in range(10) if x not in broken]
if not not_broken:
    print(abs(100-N))
else:
    if len(str(N)) != 1:
        x = min(list(map(int, map("".join, product(not_broken, repeat = len(str(N)))))) +
                         list(map(int, map("".join, product(not_broken, repeat = len(str(N)) + 1)))) +
                         list(map(int, map("".join, product(not_broken, repeat = len(str(N)) - 1)))),
                            key = lambda x : len(str(x)) + abs(x-N))
    else:
        x = min(list(map(int, map("".join, product(not_broken, repeat=len(str(N)))))) +
                         list(map(int, map("".join, product(not_broken, repeat=len(str(N)) + 1)))),
                            key = lambda x : len(str(x)) + abs(x-N))
    print(min(len(str(x)) + abs(x-N), abs(100 - N)))