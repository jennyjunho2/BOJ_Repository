import sys
input = sys.stdin.readline

first = list(map(int, input().split()))
second = list(map(int, input().split()))

first_score = 0
second_score = 0
for i in range(9):
    first_score += first[i]
    if first_score > second_score:
        print("Yes")
        exit(0)
    second_score += second[i]