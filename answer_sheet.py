import sys
input = sys.stdin.readline

a, b, S = map(int, input().split())
if S > a*b-a-b:
    print("YES")
    exit(0)

x = S // a
while x >= 0:
    if (S-x*a)%b == 0:
        print("YES")
        exit(0)
    x -= 1

print("NO")