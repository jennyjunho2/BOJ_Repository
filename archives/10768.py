import sys
input = sys.stdin.readline

month = int(input())
day = int(input())
if month >= 3:
    print("After")
elif month <= 1:
    print("Before")
else:
    if day > 18:
        print("After")
    elif day < 18:
        print("Before")
    else:
        print("Special")