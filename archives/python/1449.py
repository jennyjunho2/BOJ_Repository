import sys
input = sys.stdin.readline

N, L = map(int, input().split())
pipe = sorted(list(map(int, input().split())))
cnt = 0
while pipe:
    num = pipe[0]
    for i in range(num, num+L):
        try:
            pipe.remove(i)
        except ValueError:
            pass
    cnt += 1
print(cnt)