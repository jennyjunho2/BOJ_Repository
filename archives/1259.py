arr = []
while 1:
    a = input()
    if (a == "0"):
        break
    else:
        arr.append(a)

for word in arr:
    if (word == word[::-1]):
        print("yes")
    else:
        print("no")