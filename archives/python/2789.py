import sys
input = sys.stdin.readline

words = input().strip()
ans = ""
strings = list("CAMBRIDGE")
for word in words:
    if word not in strings:
        ans += word
print(ans)