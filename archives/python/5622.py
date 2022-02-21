a = list(str(input().split()))
number = list()
dial_dict = {2:['A','B','C'],3:['D','E','F'],4:['G','H','I'],5:['J','K','L'],6:['M','N','O'],7:['P','Q','R','S'],8:['T','U','V'],9:['W','X','Y','Z']}
for i in a:
    for j in dial_dict:
        if i in dial_dict[j]:
            number.append(j+1)
print(sum(number))