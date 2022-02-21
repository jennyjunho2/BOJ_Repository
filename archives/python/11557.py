T = int(input())
for i in range(T):
    N = int(input())
    univ = []
    beer = []
    for j in range(N):
        a, b = input().split()
        univ.append(a)
        beer.append(int(b))
    idx = beer.index(max(beer))
    print(univ[idx])