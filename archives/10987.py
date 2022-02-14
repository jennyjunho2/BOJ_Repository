import sys
input = sys.stdin.readline

words = input().rstrip()
vowel = ['a', 'e', 'i', 'o', 'u']
cnt = 0
for word in words:
    if word in vowel:
        cnt += 1
print(cnt)