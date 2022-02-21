# - 이후의 모든 수들은 음수로 만들어 버릴 수 있음

import sys
input = sys.stdin.readline

a = input().strip().split('-', 1)
print(int(sum(map(int, a[0].replace("-", "+").split("+")))) - sum(map(int, a[1].replace("-", "+").split("+"))) if len(a) == 2 else sum(map(int, a[0].split("+"))))