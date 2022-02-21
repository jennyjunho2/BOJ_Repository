A, B = map(int, input().split())
C = int(input())
C_hour, C_min = divmod(C, 60)
new_A = (A+C_hour + (B+C_min) // 60) % 24
new_B = (B+C_min) % 60
print(new_A, new_B)