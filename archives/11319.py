T = int(input())
vowels = ['A', 'E', 'I', 'O', "U", 'a', 'e', 'i', 'o', 'u']
for _ in range(T):
    string = input().replace(" ", "")
    cnt = 0
    for word in string:
        if word in vowels:
            cnt += 1
    print(len(string)-cnt, cnt)