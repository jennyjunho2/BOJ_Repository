import sys
input = sys.stdin.readline

N, M = map(int, input().split())
trees = list(map(int, input().split()))

#binary search
start, end = 1, max(trees)
while start <= end:
	result = 0
	mid = (start + end) // 2
	for tree in trees:
		result += max(0, tree-mid)

	if M > result:
		end = mid - 1
	else:
		start = mid + 1

print(end)