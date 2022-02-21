N = int(input())
arr = list(map(int, input().split()))

num = set(range(2, 1001))
for i in range(2, 1001):
    if i in num:
        num -= set(range(i*2,1001,i))
print(len([x for x in arr if x in list(num)]))