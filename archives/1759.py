import sys
input = sys.stdin.readline

from itertools import combinations
L, C = map(int, input().split())
words = sorted(list(input().split()))
vowels = set(['a', 'e', 'i', 'o', 'u'])

result = []
for word in combinations(words, L):
    vowel, constant = 0, 0
    for char in word:
        if char in vowels:
            vowel += 1
        else:
            constant += 1
    if vowel > 0 and constant > 1:
        result.append("".join(word))

for i in result: print(i)