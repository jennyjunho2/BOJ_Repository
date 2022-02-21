import sys
input = sys.stdin.readline

T = int(input())
for _ in range(T):
    result = []
    word1, word2 = input().split()
    for i in range(len(word1)):
        a = ord(word2[i]) - ord(word1[i])
        result.append(a if a >= 0 else 26 + a)
    print("Distances: ", end = "")
    print(*result)