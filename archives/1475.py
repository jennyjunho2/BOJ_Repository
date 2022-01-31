word = list(input())
cnt = [0]*10
for i in range(len(word)):
    num = int(word[i])
    if num == 6 or num == 9:
        if (cnt[6] <= cnt[9]):
            cnt[6] += 1
        else:
            cnt[9] += 1
    else:
        cnt[num] += 1
print(max(cnt))