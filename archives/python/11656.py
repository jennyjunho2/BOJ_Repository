import sys
input = sys.stdin.readline

S = input().strip()
print("\n".join(sorted([S[i:] for i in range(len(S))])))