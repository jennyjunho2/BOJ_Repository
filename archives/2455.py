max = 0
cnt = 0
for _ in range(4):
    down, up = map(int, input().split())
    cnt = cnt - down+up
    if cnt > max:
        max = cnt
print(max)