# python3 TLE 남
# pypy3로 해야함

import sys
input = sys.stdin.readline

def solution():
    def squares(num):
        i = 1
        result = []
        while i <= (num**0.5):
            result.append(i**2)
            i += 1
        return result

    N = int(input())
    square = squares(N)
    dp = [x for x in range(100001)]
    for i in range(2, N+1):
        for num in square:
            dp[i] = min(dp[i], dp[i-num] + 1) 

    print(dp[N])

if __name__ == "__main__":
    solution()