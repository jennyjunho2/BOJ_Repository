import sys
input = sys.stdin.readline

S = input().rstrip()
temp = ""
tag_flag = False
for word in S:
    if word == "<":
        tag_flag = True
        print(temp[::-1], end = "")
        print("<", end = "")
    elif word == ">":
        tag_flag = False
        print(">", end = "")
        temp = ""
    elif word == " ":
        if not tag_flag:
            print(temp[::-1], end = "")
            print(" ", end = "")
            temp = ""
        else:
            print(" ", end = "")
    else:  
        if tag_flag:
            print(word, end = "")
        else:
            temp += word
print(temp[::-1], end = "")