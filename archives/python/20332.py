n = int(input())
if sum(map(int, input().split())) % 3 == 0:
    print("yes")
else:
    print("no")