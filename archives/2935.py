import sys

A = int(sys.stdin.readline().strip())
cal = sys.stdin.readline().strip()
B = int(sys.stdin.readline().strip())
if (cal == "+"):
    print(A+B)
else:
    print(A*B)