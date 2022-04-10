import sys
input = sys.stdin.readline

import re
N = int(input())
pattern = input().strip().split("*")
p = re.compile(f"^{pattern[0]}[a-z]*{pattern[1]}$")

for _ in range(N):
    word = input().strip()
    result = p.findall(word)
    print("DA") if result else print("NE")