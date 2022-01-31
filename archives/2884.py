H, M = map(int, input().split())
if (H == 0):
    if (M >= 45):
        H1 = 0
    else:
        H1 = 23
else:
    if (M >= 45):
        H1 = H
    else:
        H1 = H-1

M1 = (M-45) if (M>= 45) else (M+15)
print(f"{H1} {M1}")