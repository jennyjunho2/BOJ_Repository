# 유클리드 호제법
# 두 양의 정수 혹은 다항식의 최대공약수를 구하는 방법
# 전제 : a > b

# 1. 유클리드 호제법 반복문 사용
def GCD(a, b):
    rem = 0
    while b:
        rem = a % b
        a, b = b, rem
    return a

#2. 유클리드 호제법 재귀문 사용
def GCD2(a, b):
    rem = a % b
    if not rem:
        return a
    else :
        return GCD2(b, rem)