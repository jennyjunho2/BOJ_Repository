import sys

A, B = map(int, sys.stdin.readline().strip().split())
m = int(sys.stdin.readline().strip())
input_number = list(map(int, sys.stdin.readline().strip().split()))
input_number.reverse()
number = 0
num_2 = 1

for nums in input_number:
	number += nums * num_2
	num_2 *= A

quotient = 1
result = []
while quotient != 0:
	quotient, remainder = divmod(number, B)
	result.append(remainder)
	number = quotient

result.reverse()
print(" ".join(map(str, result)))

