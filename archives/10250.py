T = int(input())
for _ in range(T):
    arr = []
    H, W, N = map(int, input().split())
    for i in range(1, W+1):
        for j in range(1, H+1):
            arr.append(f"{j}0{i}") if i < 10 else arr.append(f"{j}{i}")
    print(arr[N-1])