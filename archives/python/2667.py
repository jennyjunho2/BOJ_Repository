import sys
input = sys.stdin.readline

def dfs(x, y, num):
	global cnt_number
	if x <= -1 or y <= -1 or x >= N or y >= N:
		return False
	if graph[x][y] == 1:
		graph[x][y] = num
		cnt_number += 1
		dfs(x-1, y, num)
		dfs(x, y-1, num)
		dfs(x+1, y, num)
		dfs(x, y+1, num)
		return True
	return False

N = int(input())
graph = [list(map(int, input().strip())) for _ in range(N)]
num = 2
cnt = 0
ans = []
for i in range(N):
	for j in range(N):
		cnt_number = 0
		if dfs(i, j, num) == True:
			ans.append((num, cnt_number))
			cnt += 1
			num += 1
print(cnt)
for i in sorted(ans, key = lambda x : x[1]): print(i[1])