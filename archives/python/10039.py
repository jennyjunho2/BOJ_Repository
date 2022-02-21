score = []
for _ in range(5):
    score.append(int(input()))
average = [x if x > 40 else 40 for x in score]
print(int(sum(average)/5))