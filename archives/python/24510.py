import sys
input = sys.stdin.readline

C = int(input())
max_num = 0
for _ in range(C):
    word = input().strip()
    num = word.count("for") + word.count("while")
    max_num = max(max_num, num)
print(max_num)