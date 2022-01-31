L, P = map(int, input().split())
people = map(int, input().split())
print(" ".join([str(x-L*P) for x in people]))