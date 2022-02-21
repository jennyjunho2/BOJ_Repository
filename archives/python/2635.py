import sys
input = sys.stdin.readline

N = int(input())
max_len = 0
result = []
for i in range(N//2, N+1):
    arr = [N, i]
    while True:
        if arr[-2] - arr[-1] >= 0:
            arr.append(arr[-2] - arr[-1])
        else:
            break
    if len(arr) > max_len:
        result = arr
        max_len = len(arr)

print(max_len)
print(" ".join(map(str, result)))