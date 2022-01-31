arr = []
for _ in range(10):
    arr.append(int(input()))

mod = set(map(lambda x: x%42, arr))
print(len(mod))