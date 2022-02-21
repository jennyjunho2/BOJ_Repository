N = int(input())
num = 665
cnt = 0

while 1:
    num += 1
    if (str(num).count("666") >= 1):
        cnt += 1
    if (cnt == N):
        break
print(num)