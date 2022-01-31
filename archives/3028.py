string = input()
pos = [1,0,0]
for i in string:
    if i == "A":
        pos[1], pos[0] = pos[0], pos[1]
    elif i == "B":
        pos[2], pos[1] = pos[1], pos[2]
    elif i == "C":
        pos[2], pos[0] = pos[0], pos[2]
print(pos.index(1)+1)