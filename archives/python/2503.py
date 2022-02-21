import sys
input = sys.stdin.readline

from itertools import permutations
N = int(input())
hints = [list(map(int, input().split())) for _ in range(N)]
nums = list(permutations([x for x in range(1, 10)], 3))
cnt = 0
for num in nums:
	num = str("".join(map(str, num)))
	flag = True
	for hint in hints:
		guess, strike, ball = hint[0], hint[1], hint[2]
		strike_count = ball_count = 0
		guess = str(guess)
		for j in range(3):
			if num[j] in guess:
				if num[j] == guess[j]:
					strike_count += 1
				else:
					ball_count += 1
		if strike_count != strike or ball_count != ball:
			flag = False
			break
	if flag:
		cnt += 1
print(cnt)