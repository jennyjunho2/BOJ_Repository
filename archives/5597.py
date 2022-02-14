import sys
input = sys.stdin.readline

students = [False] * 30
for _ in range(28):
    students[int(input()) - 1] = True
print(*[idx + 1 for idx, x in enumerate(students) if not x], sep = "\n")