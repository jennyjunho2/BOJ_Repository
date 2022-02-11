import sys
input = sys.stdin.readline

n = int(input())
ans = n
for i in range(2, int(n**0.5)+1):
	if n % i == 0:
		while n % i == 0:
			n //= i
		ans *= (i-1) / i
if n > 1 : ans *= (n-1) / n
print(int(ans))