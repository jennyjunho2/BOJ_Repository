T = int(input())
for _ in range(T):
    p = int(input())
    people = []
    for _ in range(p):
        people.append(tuple(input().split()))
    people.sort(key = lambda x : int(x[0]))
    print(people[-1][1])