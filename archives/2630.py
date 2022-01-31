import sys
input = sys.stdin.readline

N = int(input())
paper = [list(map(int, input().split())) for _ in range(N)]
white, blue = 0, 0

def DFS(x, y, N):
    global white, blue
    temp = 0
    for i in range(x, x+N):
        for j in range(y, y+N):
            if paper[i][j]:
                temp += 1

    if not temp:
        white += 1
    elif temp == N**2:
        blue += 1
    else:
        DFS(x, y, N // 2)
        DFS(x, y + N // 2, N // 2)
        DFS(x + N // 2, y, N // 2)
        DFS(x + N // 2, y + N // 2, N // 2)
    return


DFS(0, 0, N)
print(white)
print(blue)