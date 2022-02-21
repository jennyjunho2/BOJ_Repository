burger = []
for _ in range(3):
    burger.append(int(input()))
cola = int(input())
cider = int(input())
print(min(burger) + min(cola, cider) - 50)