import sys
input = sys.stdin.readline

def solution():
    for _ in range(int(input())):
        s, p = input().strip().split()
        cnt = 0
        while True:
            if p in s:
                s = s.replace(p, "", 1)
                cnt += 1
            else:
                break
        print(cnt + len(s))

if __name__ == "__main__":
    solution()