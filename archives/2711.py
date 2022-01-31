T = int(input())
for _ in range(T):
    index, word = input().split()
    index = int(index)
    word = word[:index-1] + word[index:]
    print(word)