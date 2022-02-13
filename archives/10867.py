import sys
input = sys.stdin.readline

N = int(input())
print(" ".join(map(str, sorted(set(map(int, input().split()))))))