N, K = map(int, input().split())
break_signal = False
yaksu = []
for i in range(1, N + 1):
	if N % i == 0:
		yaksu.append(i)

	if len(yaksu) == K:
		print(i)
		break_signal = True
		break

if break_signal == False:
	print(0)