import sys

train = 0
train_max = 0
for _ in range(10):

	minus, plus = map(int, input().split())
	train = train - minus + plus
	if train_max < train:
		train_max = train

print(train_max)