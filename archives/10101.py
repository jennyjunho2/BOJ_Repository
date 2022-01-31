a = []
for _ in range(3):
    a.append(int(input()))

if (a == [60, 60, 60]):
    print("Equilateral")
elif (sum(a) != 180):
    print("Error")
else:
    if (a[0] == a[1] or a[0] == a[2] or a[1] == a[2]):
        print("Isosceles")
    else:
        print("Scalene")