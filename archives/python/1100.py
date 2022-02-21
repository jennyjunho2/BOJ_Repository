import sys
input = sys.stdin.readline

chess = [list(input().strip()) for _ in range(8)]
cnt = 0
for i in range(8):
    if i % 2 == 0:
        cnt += chess[i][0::2].count("F")
    else:
        cnt += chess[i][1::2].count("F")
print(cnt)