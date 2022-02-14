import sys
input = sys.stdin.readline

words = input().strip()
ans = ""
for word in words:
    if word.isupper():
        ans += word.lower()
    else:
        ans += word.upper()
print(ans)