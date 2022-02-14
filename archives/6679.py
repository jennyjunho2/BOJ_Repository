import sys
input = sys.stdin.readline

for num in range(1000, 10000):
    num_int = num_hex = num_twelve = 0
    i = num
    while i != 0:
        num_hex += divmod(i, 16)[1]
        i //= 16
    
    j = num
    while j != 0:
        num_twelve += divmod(j, 12)[1]
        j //= 12
    
    k = num
    while k != 0:
        num_int += divmod(k, 10)[1]
        k //= 10
    
    if num_hex == num_twelve == num_int:
        print(num)