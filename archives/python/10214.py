T = int(input())
for _ in range(T):
	result = 0
	yonsei, korea = 0, 0
	for _ in range(9):
		Y, K = map(int, input().split())
		yonsei += Y
		korea += K

	if yonsei > korea:
		print("Yonsei")
	elif yonsei < korea:
		print("Korea")
	else:
		print("Draw")