import sys

N = int(sys.stdin.readline().strip())
ans = [0]*10001

for _ in range(N):
    ans[int(sys.stdin.readline().strip())] += 1

for i in range(1, 10001):
    for j in range(int(ans[i])):
        sys.stdout.write(str(i)+"\n")