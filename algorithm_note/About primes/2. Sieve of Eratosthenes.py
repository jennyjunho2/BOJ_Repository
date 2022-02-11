# 가장 간단한 에라토스테네스의 체
def primes(num):
    sieve = [False, False] + [True] * [num - 1]
    for i in range(2, int(num**0.5) + 1):
        if sieve[i]:
            for j in range(i*2, num + 1, i):
                sieve[j] = False
    return [idx for idx, x in enumerate(sieve) if x]

# 시간 개선된 에라토스테네스의 체
def primes2(num):
    sieve = [False, False] + [True] * [num - 1]
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
def primes3(num):
    sieve = [x for x in range(num + 1)]
    sieve[0] = sieve[1] = -1
    for i in range(2, int(num**0.5) + 1):
        # 만약 소수일 경우
        if sieve[i] == i:
            for j in range(i**2, num+1, i):
                if sieve[j] == j:
                    sieve[j] = i
    return sieve
