import sys
input = sys.stdin.readline

word = input().rstrip()
if "d2" in word or "D2" in word:
    print("D2")
else:
    print("unrated")