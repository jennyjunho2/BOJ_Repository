import sys
input = sys.stdin.readline

E, S, M = map(int, input().split())
num = 1
while True:
    e = (num-E) % 15 == 0
    s = (num-S) % 28 == 0
    m = (num-M) % 19 == 0
    if e and s and m:
        print(num)
        break
    num += 1