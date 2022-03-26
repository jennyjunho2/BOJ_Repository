# 가장 기본적인 소수 판별법
def is_prime(num):
    for i in range(2, num):
        if num % i == 0:
            return False
    return True

# 절반까지만 체크, 이후는 어차피 걸러짐(2부터 나누니까)
def is_prime2(num):
    for i in range(2, num // 2 + 1):
        if num % i == 0:
            return False
    return True

# 제곱근까지만 확인, 이는 약수의 성질에서 기인함
def is_prime3(num):
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

print(is_prime(50))
print(is_prime(100))