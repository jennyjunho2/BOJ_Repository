li = []
def self_number():
    for i in range(1, 10000):
        new_num = i + sum(list(map(int, list(str(i)))))
        if new_num < 10000: li.append(new_num)
self_number()
a = [x for x in range(1, 10000) if x not in li]
for j in a: print(j)