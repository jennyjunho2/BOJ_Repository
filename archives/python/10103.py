N = int(input())
a, b = 100, 100
for _ in range(N):
	dice1, dice2 = map(int, input().split())
	if dice1 == dice2:
		pass
	elif dice1 > dice2:
		a, b = a, b - dice1
	else:
		a, b = a - dice2, b

print(a)
print(b)