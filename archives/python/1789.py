import sys

S = int(sys.stdin.readline().strip())
num = 0
for i in range(1, S+1):
    num += i
    if num > S:
        print(i-1)
        break