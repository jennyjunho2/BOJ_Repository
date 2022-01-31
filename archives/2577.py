A = int(input())
B = int(input())
C = int(input())
num = A*B*C
for i in range(10):
    cnt = 0
    for j in str(num):
        if j == str(i):
            cnt += 1
    print(cnt)