c1 = int(input())
arr = [0]*(1000000)
i = 0
arr[0] = c1
while(not arr[i] == 1):
    if (arr[i]%2 == 0):
        arr[i+1] = arr[i]//2
    else:
        arr[i+1] = 3*arr[i]+1
    i += 1
print(arr.index(1)+1)