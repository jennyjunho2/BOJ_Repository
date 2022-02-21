import sys
input = sys.stdin.readline
from collections import deque

N, K = map(int, input().split())
nums = deque([x for x in range(1, N+1)])

ans = []
while (len(nums) > 0):
	nums.rotate(-(K-1))
	a = nums.popleft()
	ans.append(a)
print("<" + ", ".join(map(str, ans)) + ">")