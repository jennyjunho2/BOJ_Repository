N = int(input())
for i in range(1, N):
    print("*"*i + " " * (2*(N-i)) + "*"*i)
print("*"*N*2)
for i in range(N-1, 0, -1):
    print("*"*i + " " * (2*(N-i)) + "*"*i)