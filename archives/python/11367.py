T = int(input())

def func(num):
    if num >=97:
        return "A+"
    elif num >= 90:
        return "A"
    elif num >= 87:
        return "B+"
    elif num >= 80:
        return "B"
    elif num >= 77:
        return "C+"
    elif num >= 70:
        return "C"
    elif num >= 67:
        return "D+"
    elif num >= 60:
        return "D"
    else:
        return "F"

for _ in range(T):
    name, score = input().split()
    print(name, func(int(score)))