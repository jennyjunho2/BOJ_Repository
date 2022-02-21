import sys
input = sys.stdin.readline

cnt = 0
FBI = [False] * 5
for i in range(5):
    word = input().strip()
    if "FBI" in word:
        FBI[i] = True
        cnt += 1
if cnt == 0:
    print("HE GOT AWAY!")
else:
    print(*[idx + 1 for idx, x in enumerate(FBI) if x])