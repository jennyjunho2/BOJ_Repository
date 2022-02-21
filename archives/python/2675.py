T = int(input())
for _ in range(T):
    R, S = input().split()
    a = []
    for i in list(S): a.extend([i]*int(R))
    print("".join(a))