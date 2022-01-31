L = int(input())
problem = input()
ans = 0
R = 1
for i in range(L):
    ans += (ord(problem[i])-96)*R
    ans %= 1234567891
    R *= 31
    R %= 1234567891
print(ans)