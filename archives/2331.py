import sys
input = sys.stdin.readline

A, P = map(int, input().split())
result = [A]
cnt = 1
while cnt <= 9999:
    new = sum(map(lambda x : int(x) ** P, list(str(result[-1]))))
    if new in result:
        idx = result.index(new)
        result = result[:idx]
        break
    else:
        result.append(new)
    cnt += 1
print(len(result))