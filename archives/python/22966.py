N = int(input())
ans = 5
ans2 = ""
for _ in range(N):
    problem, difficulty = input().split()
    if int(difficulty) < ans:
        ans = int(difficulty)
        ans2 = problem

print(ans2)