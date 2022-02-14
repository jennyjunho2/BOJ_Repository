import sys
input = sys.stdin.readline

from collections import deque
N, K = map(int, input().split())
queue = deque([N])
distance = [0] * 200000
while queue:
    now = queue.popleft()
    if now == K:
        print(distance[now])
        exit()
    next_pos = (now - 1, now + 1, now * 2)
    for i in next_pos:
        if i >=0 and i < 200000 and not distance[i]:
            distance[i] = distance[now] + 1
            queue.append(i)