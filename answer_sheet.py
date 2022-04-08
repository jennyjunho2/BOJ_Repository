import sys
input = sys.stdin.readline

N = int(input())

fact = 1
cnt = 0
arr = []
for i in range(1, 2000):
    fact *= i
    if len(str(fact)) == N:
        cnt += 1
        arr.append(i)

if not cnt:
    print("NO")
else:
    print(cnt)
    for i in arr: print(i)