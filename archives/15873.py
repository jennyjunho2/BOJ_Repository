import sys
input = sys.stdin.readline

word = input().rstrip()
if len(word) == 4:
    print(20)
elif len(word) == 3:
    if word[1] == "0":
        A, B = int(word[0:2]), int(word[2])
        print(A+B)
    else:
        A, B = int(word[0]), int(word[1:3])
        print(A+B)
else:
    A, B = int(word[0]), int(word[1])
    print(A+B)