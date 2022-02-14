import sys
input = sys.stdin.readline

N, M = map(int, input().split())
S = list(input().strip() for _ in range(N))
cnt = 0
for i in range(M):
    word = input().strip()
    if word in S:
        cnt += 1
print(cnt)