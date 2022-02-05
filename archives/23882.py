import sys
input = sys.stdin.readline

def selection(arr, cnt):
	n = len(arr)
	if cnt > (n*(n+1)//2):
		print(-1)
		return

	result = 0
	for i in range(len(arr)-1, 0, -1):
		max_idx = arr.index(max(arr[:i+1]))
		if max_idx != i:
			arr[max_idx], arr[i] = arr[i], arr[max_idx]
			result += 1
		if result == cnt:
			print(" ".join(map(str, arr)))
			return
	print(-1)

N, K = map(int, input().split())
arr = list(map(int, input().split()))
selection(arr, K)