import sys
input = sys.stdin.readline

cnt = 1
while 1:
    n = int(input())
    if n == 0:
        break
    elif n % 2 == 0:
        print(f"{cnt}. even {n // 2}")
    else:
        print(f"{cnt}. odd {(n-1) // 2}")
    cnt += 1