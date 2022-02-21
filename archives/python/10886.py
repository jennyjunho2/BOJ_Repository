N = int(input())
a = []
for _ in range(N):
    a.append(int(input()))

cnt0 = 0
cnt1 = 0
for i in a:
    if i == 0:
        cnt0 += 1
    else:
        cnt1 += 1
if cnt0 > cnt1 : print("Junhee is not cute!")
else: print("Junhee is cute!")