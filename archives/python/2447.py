import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

def star(num):
	if num == 1:
		return '*'

	small_star = star(num // 3)
	result = []

	for i in small_star:
		result.append(i*3)
	
	for i in small_star:
		result.append(i + " "*(num // 3) + i)
	
	for i in small_star:
		result.append(i*3)
	return result

N = int(input())
print("\n".join(star(N)))