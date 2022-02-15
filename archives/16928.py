import sys
input = sys.stdin.readline

from collections import deque
N, M = map(int, input().split())
distance = [-1] * 101
next_pos = [x for x in range(101)]
for _ in range(M + N):
    x, y = map(int, input().split())
    next_pos[x] = y
    
distance[1] = 0
queue = deque([1])
while queue:
    x = queue.popleft()
    for i in range(1, 7):
        y = x + i
        if y > 100:
            continue
        y = next_pos[y]
        if distance[y] == -1:
            distance[y] = distance[x] + 1
            queue.append(y)
print(distance[100])