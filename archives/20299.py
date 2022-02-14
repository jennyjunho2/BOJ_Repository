import sys
input = sys.stdin.readline

N, K, L = map(int, input().split())
result = []
team = 0
for _ in range(N):
    a, b, c = map(int, input().split())
    if a >= L and b >= L and c >= L and a+b+c >= K:
        team += 1
        result.append(a)
        result.append(b)
        result.append(c)
print(team)
print(" ".join(map(str, result)))