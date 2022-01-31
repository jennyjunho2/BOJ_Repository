T = int(input())
arr = [0, 0, 0]
arr[0] = T//300
T -= arr[0]*300
arr[1] = T//60
T -= arr[1]*60
arr[2] = T//10
T -= arr[2]*10

if (T == 0):
    print(arr[0], arr[1], arr[2])
else:
    print(-1)