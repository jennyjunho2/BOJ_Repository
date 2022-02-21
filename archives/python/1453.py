import sys
input = sys.stdin.readline

N = int(input())
num = list(map(int, input().split()))
print(len(num) - len(set(num)))