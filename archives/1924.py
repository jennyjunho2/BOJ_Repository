import sys
input = sys.stdin.readline

import datetime
x, y = map(int, input().split())
day1, day2 = datetime.date(2007, 1, 1), datetime.date(2007, x, y)
num = (day2-day1).days % 7
if num == 0:
    print("MON")
elif num == 1:
    print("TUE")
elif num == 2:
    print("WED")
elif num == 3:
    print("THU")
elif num == 4:
    print("FRI")
elif num == 5:
    print("SAT")
else:
    print("SUN")