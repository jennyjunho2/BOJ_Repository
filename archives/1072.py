import sys
input = sys.stdin.readline

X, Y = map(int, input().split())
Z = (Y*100) // X
if Z >= 99:
	print(-1)
else:
	#binary search
	start, end = 1, 10**9
	while start <= end:
		mid = (start + end) // 2
		new_Z = (Y+mid)*100 // (X+mid)
		if new_Z <= Z:
			start = mid + 1
		else:
			ans = mid
			end = mid - 1
	print(ans)