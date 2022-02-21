import sys
input = sys.stdin.readline

n, d = map(int, input().split())
nums = [str(x) for x in range(1, n+1)]
table = {"0" : 0,
         "1" : 0,
         "2" : 0,
         "3" : 0,
         "4" : 0,
         "5" : 0,
         "6" : 0, 
         "7" : 0,
         "8" : 0,
         "9" : 0}
for num in nums:
    for i in list(num):
        table[i] += 1
print(table[str(d)])