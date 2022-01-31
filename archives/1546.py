N = int(input())
arr = list(map(int, input().split()))
new_arr = list(map(lambda x : x*100/max(arr), arr))
print(sum(new_arr) / len(new_arr))