import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

def dfs(num, cnt):
    global result
    if num == B:
        result = min(result, cnt)
        return
    elif num > B:
        return
    else:
        dfs(num * 2, cnt + 1)
        dfs(10*num + 1, cnt + 1)
    return
    

A, B = map(int, input().split())
result = 10**9
dfs(A, 1)
print(-1 if result == 10**9 else result)