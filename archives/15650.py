from itertools import combinations

N, M = map(int, input().split())
arr = [x for x in range(1, N+1)]
ans = list(combinations(arr, M))
for i in ans:
    print(" ".join(map(str, i)))