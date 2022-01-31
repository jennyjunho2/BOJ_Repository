apples = 0
bananas = 0
apples += int(input()) * 3
apples += int(input()) * 2
apples += int(input()) * 1
bananas += int(input())*3
bananas += int(input()) * 2
bananas += int(input()) * 1

if apples > bananas:
    print("A")
elif apples < bananas:
    print("B")
else:
    print("T")