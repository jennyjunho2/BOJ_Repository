import sys

left = list(sys.stdin.readline().split()[0])
n = int(sys.stdin.readline())

right = []
for i in range(n):
    a = sys.stdin.readline().split()
    if len(a) != 1:
        left.append(a[1])
    else:
        if a[0] == 'L':
            if len(left) > 0:
                right.append(left.pop())
        elif a[0] == 'D':
            if len(right) > 0:
                left.append(right.pop())
        elif a[0] == 'B':
            if len(left) > 0:
                left.pop()

print(''.join(left) + ''.join(reversed(right)))