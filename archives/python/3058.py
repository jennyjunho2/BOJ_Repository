T = int(input())
for _ in range(T):
    nums = [x for x in map(int, input().split()) if x % 2 == 0]
    print(sum(nums), min(nums))