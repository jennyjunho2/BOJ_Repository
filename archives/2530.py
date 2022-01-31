A, B, C = map(int, input().split())
D = int(input())
D_min, D_sec = divmod(D, 60)
D_hour, D_min = divmod(D_min, 60)

a, new_C = divmod(C + D_sec, 60)
b, new_B = divmod(B + D_min + a ,60)
_, new_A = divmod((A + D_hour + b), 24)
print(new_A, new_B, new_C)