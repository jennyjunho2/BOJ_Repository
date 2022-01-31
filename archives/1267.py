N = int(input())
yongsik = 0
minsik = 0
phone = list(map(int, list(input().split())))
for i in range(N):
    yongsik += (phone[i]//30 + 1)*10
    minsik += (phone[i]//60 + 1)*15

if (yongsik == minsik):
    print("Y", "M", yongsik)
elif (yongsik > minsik):
    print("M", minsik)
else:
    print("Y", yongsik)