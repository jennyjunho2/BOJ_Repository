N = int(input())
if (N == 6):
    print("2")
elif (N == 1 or N == 2 or N == 4 or N == 7):
    print("-1")
elif (N == 3 or N == 5):
    print("1")
else:
    five, rem = divmod(N, 5)
    while(rem%3 != 0):
        five -= 1
        rem += 5
    print(f"{five+(rem//3)}")