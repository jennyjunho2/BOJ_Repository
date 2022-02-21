import sys
input = sys.stdin.readline

word = input().strip()
cnt1, cnt2 = 0, 0
for i in range(len(word) - 2):
    a = word[i:i+3]
    if a == "JOI":
        cnt1 += 1
    elif a == "IOI":
        cnt2 += 1
print(cnt1)
print(cnt2)