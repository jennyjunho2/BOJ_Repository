import sys
#input = sys.stdin.readline

def compare(list1):
	chess1 = [
		'BWBWBWBW',
		'WBWBWBWB',
		'BWBWBWBW',
		'WBWBWBWB',
		'BWBWBWBW',
		'WBWBWBWB',
		'BWBWBWBW',
		'WBWBWBWB'
	]
	result = 0
	for i in range(8):
		for j in range(8):
			if chess1[i][j] != list1[i][j]:
				result += 1
	return min(result, 64-result)

N, M = map(int, input().split())
input_chess = [input() for x in range(N)]
minimum = 64
for i in range(M-7):
	for j in range(N-7):
		chunk = [line[i:i+8] for line in input_chess[j:j+8]]
		num = compare(chunk)
		if num <= minimum:
			minimum = num
print(minimum)
