old_sum = 0
cnt = 0
for i in range(5):
    new_sum = sum(list(map(int, input().split())))
    if new_sum > old_sum:
        old_sum = new_sum
        cnt = i
print(cnt+1, old_sum)