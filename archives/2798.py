from itertools import combinations

N, M = map(int, input().split())
cards = sorted(list(map(int, input().split())))

ans = 0
for card in list(combinations(cards, 3)):
    if (ans <= sum(card) <= M):
        ans = sum(card)
    else:
        pass
print(ans)