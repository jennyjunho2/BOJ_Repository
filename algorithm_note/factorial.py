# 팩토리얼(재귀) 최적화를 하여보자.

# 1. 일반적인 재귀함수
def factorial(n):
    if n < 2:
        return 1
    return n * factorial(n-1)

# 2. 꼬리 재귀(tail recursion)을 이용한 팩토리얼 계산
def factorial1a(n, acc = 1):
    if n < 2:
        return 1 * acc
    return factorial1a(n-1, acc * n)

def factorial1b(n, acc = 1):
    while True:
        if n < 2:
            return 1 * acc
        return factorial1b(n-1, acc * n)
        break

def factorial1c(n, acc = 1):
    while True:
        if n < 2:
            return 1 * acc
        (n, acc) = (n-1, acc * n)
        continue
        break

# O(n)을 O(1)으로 바꾸어줬는데... 재귀가 아닌거 같은데?
def factorial1d(n, acc = 1):
    while n > 1:
        (n, acc) = (n-1, acc * n)
    return acc

# 3. 트램폴린(trampoline) 최적화
import functools
import sys
sys.setrecursionlimit(1000)
class trampoline:
    def call(f):
        def g(*args, **kwargs):
            return f, args, kwargs
        return g

    def result(value):
        return None, value, None
    
    def with_trapoline(f):
        @functools.wraps(f)
        def g(*args, **kwargs):
            h = f
            while h is not None:
                h, args, kwargs = h(*args, **kwargs)
            return args
        return g

def trampoline_factorial(n, acc = 1):
    if n < 2:
        return trampoline.result(acc)
    return trampoline.call(trampoline_factorial)(n-1, n * acc)

factorial2 = trampoline.with_trapoline(trampoline_factorial)
# print(factorial1a(10000))
print(factorial2(10000))