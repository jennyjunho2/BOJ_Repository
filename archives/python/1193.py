X = int(input())
col = 1

while (X > col * (col + 1) / 2):
	col += 1

row = X + col - 1 - int(col * (col + 1) / 2)

if (col % 2 == 0):
	print(f"{row + 1}" + "/" + f"{col - row}")
else:
	print(f"{col - row}" + "/" + f"{row + 1}")