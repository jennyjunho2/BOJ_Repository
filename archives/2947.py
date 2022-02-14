import sys
input = sys.stdin.readline

num = list(map(int, input().split()))
while num != sorted(num):
    for i in range(1, len(num)):
        if num[i-1] > num[i]:
            num[i-1], num[i] = num[i], num[i-1]
            print(*num)