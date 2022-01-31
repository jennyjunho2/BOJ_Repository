N = int(input())
arr = [int(x) for x in input().split()]
max, min = max(arr), min(arr)
print(str(min) + ' ' + str(max))