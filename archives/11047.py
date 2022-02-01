import sys
input = sys.stdin.readline

N, K = map(int, input().split())
coins = sorted(list(filter(lambda x : x <= K, [int(input()) for x in range(N)])), reverse=True)
result = 0
for coin in coins:
	result += K // coin
	K = K % coin
print(result)