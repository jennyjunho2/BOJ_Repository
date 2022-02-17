import sys
input = sys.stdin.readline

from collections import deque
N, K = map(int, input().split())
queue = deque([(N, 0)])
visited = [False] * 100001
cnt = 0
min_sec = 10**7
while queue:
    x, sec = queue.popleft()
    visited[x] = True
    if x == K:
        if cnt and min_sec == sec:
            cnt += 1

        elif not cnt:
            min_sec = sec
            cnt += 1

    next_pos = [x+1, x-1, x*2]
    for i in next_pos:
        if  0 <= i < 100001 and not visited[i]:
            queue.append((i, sec + 1))
print(min_sec)
print(cnt)