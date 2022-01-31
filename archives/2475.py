N = list(map(int, input().split()))
N1 = [x**2 for x in N]
print(sum(N1)%10)