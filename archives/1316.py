N = int(input())
cnt = 0
for _ in range(N):
    err = False
    stack = []
    words = input()
    for i in range(len(words) -1):
        if (words[i] != words[i+1]):
            new_words = words[i+1:]
            if (new_words.count(words[i])) > 0:
                err = True
    if err == False:
        cnt += 1

print(cnt)