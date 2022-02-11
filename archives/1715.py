import sys
input = sys.stdin.readline

import heapq
def solution():
    N = int(input())
    cards = []
    for _ in range(N):
        heapq.heappush(cards, int(input()))
    
    cnt = 0
    while len(cards) != 1:
        a = heapq.heappop(cards)
        b = heapq.heappop(cards)
        cnt += (a+b)
        heapq.heappush(cards ,a+b)
    print(cnt)
    
if __name__ == "__main__":
    solution()