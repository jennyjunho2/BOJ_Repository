# 소수 판별
def is_prime(num):
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

# 가장 간단한 에라토스테네스의 체
def sieve_of_eratosthenes(num):
    sieve = [False, False] + [True] * (num - 1)
    for i in range(2, int(num**0.5) + 1):
        if sieve[i]:
            for j in range(i*2, num + 1, i):
                sieve[j] = False
    return [idx for idx, x in enumerate(sieve) if x]

# 시간 개선된 에라토스테네스의 체
def sieve_of_eratosthenes2(num):
    sieve = [False, False] + [True] * (num - 1)
    for i in range(2, int(num**0.5) + 1):
        if sieve[i]:
            # p가 소수라면 p^2부터 검사해도 된다.
            # p*2, p*3, ... , p*(p-1)는
            # 2의 배수,3의 배수, ... , (p-1)의 배수에서 이미 걸러짐
            for j in range(i**2, num + 1, i):
                sieve[j] = False
    return [idx for idx, x in enumerate(sieve) if x]

# 에라토스테네스의 체의 아이디어
# 각 자리 index에 가장 작은 소인수를 담는 체
def sieve_of_eratosthenes_variation(num):
    sieve = [x for x in range(num + 1)]
    sieve[0] = sieve[1] = -1
    for i in range(2, int(num**0.5) + 1):
        # 만약 소수일 경우
        if sieve[i] == i:
            for j in range(i**2, num+1, i):
                if sieve[j] == j:
                    sieve[j] = i
    return sieve

# 순다람의 체
#1 ~ N까지의 정수 리스트에 대해 1 <= i <= j이고
# i + j + 2ij <= N인 모든 i + j + 2ij 수를 제거하고
# 남은 수에 대해 2를 곱하고 1을 더해서 2N + 2 이하의
# 홀수 소수 리스트를 도출
def sieve_of_sundaram(num):
    num = (num // 2 - 1)
    sieve = [False] + [True] * (num)
    for j in range(1, int((num-1) / 3) + 1):
        for i in range(1, j+1):
            if i + j + 2*i*j <= num:
                sieve[i+j+2*i*j] = False
    primes = [2] + [2*idx + 1 for idx, x in enumerate(sieve) if x]

    if num % 2 == 1 and is_prime(num):
        primes += [num]
    return primes

# print(sieve_of_eratosthenes(20))
# print(sieve_of_eratosthenes2(20))
# print(sieve_of_sundaram(20))
print(sieve_of_sundaram(11))