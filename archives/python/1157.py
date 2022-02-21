from collections import Counter

S = input().lower()
a = Counter(S).most_common()
if (len(a) == 1):
    print(a[0][0].upper())
else:
    if (a[0][1] == a[1][1]):
        print("?")
    else:
        print(a[0][0].upper())