#이분탐색도 가능하지만, Counter면 한방에 가능하다.
#혹은 dict를 활용하거나...

import sys
input = sys.stdin.readline
from collections import Counter

N = int(input())
cards = Counter(input().split())
M = int(input())
problem = input().split()

for num in problem:
	print(cards[num], end = " ")