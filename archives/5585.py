import sys
input = sys.stdin.readline

num = 1000 - int(input())
cnt = 0
a, rem1 = divmod(num, 500)
b, rem2 = divmod(rem1, 100)
c, rem3 = divmod(rem2, 50)
d, rem4 = divmod(rem3, 10)
e, rem5 = divmod(rem4, 5)
print(a+b+c+d+e+rem5)