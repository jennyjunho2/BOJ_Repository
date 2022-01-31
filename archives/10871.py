N, X = map(int, input().split())
A = [int(x) for x in input().split()]
ans = []
for i in A:
    if (i < X):
        ans.append(str(i))

print(" ".join(ans))