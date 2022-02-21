A, B = map(int, input().split())
print(max(abs(B-A)-1, 0))
print(" ".join(map(str, [x for x in range(min(A, B)+1, max(A, B))])))