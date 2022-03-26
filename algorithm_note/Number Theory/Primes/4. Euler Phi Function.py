# 모든 소수는 소수의 곱으로 나타낼 수 있음
# 또한 오일러 함수는 소수에서 두 서로소에 한하여 곱셈적 성질을 지님
# 오일러 함수는 소수가 입력될 때 (소수-1)을 출력

# 1. 오일러 피 함수 정의 사용
# math 라이브러리의 GCD 사용
from math import gcd
def euler_phi_func(num):
    cnt = 0
    for i in range(1, num):
        if gcd(num, i) == 1:
            cnt += 1
    return cnt

# 2. 오일러 피 함수를 소인수 분해를 이용해 수식적으로 구함
def euler_phi_func2(num):
    ans = num
    for i in range(2, int(num**0.5)+1):
        if num % i == 0:
            while num % i == 0:
                num //= i
            ans *= (i-1) / i
    if num > 1 :
        ans *= (num-1) / num

    return int(ans)

print(euler_phi_func(100))
print(euler_phi_func2(100))