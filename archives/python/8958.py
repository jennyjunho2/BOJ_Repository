N = int(input())
arr = []
for _ in range(N):
    arr.append(input())

for test in arr:
    score = 0
    arr2 = test.split("X")
    for i in arr2:
        score += len(i)*(len(i)+1)//2
    print(score)