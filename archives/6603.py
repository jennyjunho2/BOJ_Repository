import sys
input = sys.stdin.readline

from itertools import combinations
while True:
    input_num = input().strip()
    if input_num == "0":
        break
    input_num = list(map(int, input_num.split()))
    k, S = input_num[0], input_num[1:]
    num_list = map(list, combinations(S, 6))
    for i in num_list:
        print(" ".join(map(str, i)))
    print()