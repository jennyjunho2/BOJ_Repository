S = list(input())
alphabet = list(map(chr, range(97,123)))

for i in range(len(alphabet)) :
    if alphabet[i] in S : alphabet[i] = S.index(alphabet[i])
    else : alphabet[i] = -1
for i in range(len(alphabet)-1) : print(alphabet[i], end=" ")
print(alphabet[len(alphabet)-1])