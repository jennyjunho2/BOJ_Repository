def custom_key(str):
	return len(str), str.lower()

N = int(input())
words_list = []
for _ in range(N):
	words_list.append(input())

for i in sorted(list(set(words_list)), key=custom_key):
	print(i)