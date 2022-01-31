def knapsack(max_weight, weight, values, n):
    # max_weight: 배낭의 무게한도,
    # weight: 각 보석의 무게,
    # values: 각 보석의 가격,
    # n: 보석
    K = [[0 for x in range(max_weight+1)] for x in range(n+1)]
    for i in range(n+1):
        for w in range(max_weight+1):
            if (i == 0 or w == 0):
                K[i][w] = 0
            elif weight[i-1] <= w:
                K[i][w] = max(K[i-1][w], K[i-1][w-weight[i-1]]+values[i-1])
            else:
                K[i][w] = K[i-1][w]
    return K[n][w]


N, K = map(int, input().split())
weight = []
values = []
for _ in range(N):
    w, v = map(int, input().split())
    weight.append(w)
    values.append(v)
print(knapsack(K, weight, values, N))