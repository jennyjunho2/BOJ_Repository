import sys
input = sys.stdin.readline

garo, sero = map(int, input().split())
T = int(input())
garo_cut = [0, garo]
sero_cut = [0, sero]
for _ in range(T):
    a = input()
    if a[0] == "0":
        sero_cut.append(int(a[2:]))
    else:
        garo_cut.append(int(a[2:]))

garo_cut.sort()
sero_cut.sort()
garo_length = [garo_cut[i+1] - garo_cut[i] for i in range(len(garo_cut)-1)]
sero_length = [sero_cut[i+1] - sero_cut[i] for i in range(len(sero_cut)-1)]
print(int(max(garo_length) * max(sero_length)))