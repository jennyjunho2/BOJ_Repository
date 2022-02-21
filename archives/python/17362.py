N = int(input())
rem = N%8
if (rem == 1):
    print("1")
elif (rem == 2 or rem == 0):
    print("2")
elif (rem == 3 or rem == 7):
    print("3")
elif (rem == 4 or rem == 6):
    print("4")
elif (rem == 5):
    print("5")