import sys
input = sys.stdin.readline

N = int(input())
num_B = list(map(int, input().split()))
num_A = [num_B[0]]
for i in range(1, len(num_B)):
    num_A.append((i+1) * num_B[i] - sum(num_A))
print(*num_A)