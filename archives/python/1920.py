N = int(input())
arr = set(map(int, input().split()))
_ = input()
prob = list(map(int, input().split()))
for i in prob:
    if i in arr:
        print(1)
    else:
        print(0)