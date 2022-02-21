A, B = map(int, input().split())
C, D = map(int, input().split())

result1 = A/C + B/D
result2 = C/D + A/B
result3 = D/B + C/A
result4 = B/A + D/C

final = max(result1, result2, result3, result4)
if result1 == final:
    print(0)
elif result2 == final:
    print(1)
elif result3 == final:
    print(2)
else:
    print(3)