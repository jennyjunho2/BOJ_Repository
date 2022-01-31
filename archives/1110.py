N = int(input())
cnt = 0
num = N

while True:
	ten, one = num // 10, num % 10
	new_one = (ten + one) % 10
	new_num = one * 10 + new_one
	cnt += 1

	if new_num == N:
		break
	else:
		num = new_num

print(cnt)