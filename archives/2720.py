T = int(input())
arr = []
for _ in range(T):
	arr.append(int(input()))

for money in arr:
	quarter = (money // 25)
	money -= quarter * 25
	dime = money // 10
	money -= dime * 10
	nickel = money // 5
	money -= nickel * 5
	print(quarter, dime, nickel, money)