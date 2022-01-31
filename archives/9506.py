import sys
import math

while 1:
    N = int(sys.stdin.readline().strip())
    arr = [1]
    if N == -1 : break
    else:
        for i in range(2, math.ceil(N**0.5)):
            if N % i == 0:
                arr.append(i)
                arr.append(N//i)
        if sum(arr) == N:
            print(f"{N} = " + ' + '.join(map(str, sorted(arr))))
        else:
            print(f"{N} is NOT perfect.")