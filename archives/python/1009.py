import sys
input = sys.stdin.readline

T = int(input())
for _ in range(T):
    a, b = map(int, input().split())
    a %= 10
    if a == 1:
        print(1)
        continue
    elif a == 2: rem = [6, 2, 4, 8]
    elif a == 3: rem = [1, 3, 9, 7]
    elif a == 4: rem = [6, 4]
    elif a == 5:
        print(5)
        continue
    elif a == 6:
        print(6)
        continue
    elif a == 7: rem = [1, 7, 9, 3]
    elif a == 8: rem = [6, 8, 4, 2]
    elif a == 9: rem = [1, 9]
    elif a == 0:
        print(10)
        continue
    print(rem[b%(len(rem))])