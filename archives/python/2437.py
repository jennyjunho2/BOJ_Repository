import sys
input = sys.stdin.readline

N = int(input())
kgs = list(map(int, input().split()))
kgs.sort()
result = 0
for i in range(N):
	if result + 1 >= kgs[i]:
		result += kgs[i]
	else:
		break
print(result + 1)