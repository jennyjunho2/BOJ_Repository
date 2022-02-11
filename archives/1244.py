import sys
input = sys.stdin.readline

N = int(input())
switch = [100] + list(map(int, input().split()))

M = int(input())
for _ in range(M):
    gender, num = map(int, input().split())
    if gender == 1:
        for i in range(num, N+1, num):
            switch[i] = abs(switch[i] - 1)
    elif gender == 2:
        i = 1
        switch[num] = abs(switch[num] - 1)
        while num >= i + 1 and num + i<= N:
            if switch[num-i] == switch[num + i]:
                switch[num-i] = abs(switch[num-i] - 1)
                switch[num+i] = abs(switch[num+i] - 1)
            else:
                break
            i += 1
    
for i in range(1, N+1):
    print(switch[i], end = " ")
    if i % 20 == 0:
        print()