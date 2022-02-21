C = int(input())
for _ in range(C):
    array = input().split()
    num, scores = array[0], list(map(int, array[1:]))
    average = sum(scores) / len(scores)
    score_above_average = [x for x in scores if x > average]
    ratio = format(len(score_above_average)*100/len(scores), '.3f')
    print(f"{ratio}%")