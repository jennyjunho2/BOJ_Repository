word = input()
alphabet = [0 for i in range(26)]

for i in range(len(word)):
    alphabet[ord(word[i])-97]+=1
print(str(alphabet).replace(',', '')[1:-1])