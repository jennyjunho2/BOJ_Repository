import heapq

stack = []
heapq.heappush(stack, 1)
heapq.heappush(stack, 2)
print(heapq.heappop(stack))