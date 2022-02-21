import sys
input = sys.stdin.readline

from collections import deque
N, P = map(int, input().split())
strings = [deque([]) for _ in range(6)]
cnt = 0
old_strnum = 6
for _ in range(N):
	strnum, prat = map(int, input().split())
	strnum -= 1
	if not strings[strnum]: #비어있는 경우
		strings[strnum].append(prat)
		cnt += 1
	else:
		if prat > strings[strnum][-1]:
			strings[strnum].append(prat)
			cnt += 1
		elif prat == strings[strnum][-1]:
			continue
		else:
			while strings[strnum] and prat < strings[strnum][-1]:
				strings[strnum].pop()
				cnt += 1
			if strings[strnum] and prat == strings[strnum][-1]:
				continue
			strings[strnum].append(prat)
			cnt += 1
print(cnt)