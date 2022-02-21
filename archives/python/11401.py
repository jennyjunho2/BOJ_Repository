import sys
input = sys.stdin.readline

# (k!(n-k)!)^(-1) % p = (k!(n-k)!)^(p-2)  % p
def fact(num, mod):
    result = 1
    for i in range(2, num+1):
        result *= i
        result %= mod
    return result

def pow_modified(num, p, mod):
    if p == 1:
        return num % mod
    
    temp = pow_modified(num, p // 2, mod)
    if p % 2 == 1:
        return temp * temp * num % mod
    else:
        return temp * temp % mod
        
MOD = 10**9 + 7
N, K = map(int, input().split())
print(fact(N, MOD) * pow_modified(fact(K, MOD) * fact(N-K, MOD), MOD - 2, MOD) % MOD)