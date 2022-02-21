import sys
input = sys.stdin.readline

N = int(input())
print(" ".join(map(str, sorted(list(map(int, input().split()))))))