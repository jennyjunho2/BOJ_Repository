T = int(input())
for _ in range(T):
    arr = input().split()
    num = float(arr.pop(0))
    for i in arr:
        if (i == "@"): num *= 3
        elif (i == "%"): num += 5
        elif (i == "#"): num -= 7
    print("%.2f" % num)