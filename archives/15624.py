import sys
input = sys.stdin.readline

def solution():
    n = int(input())
    dp = [0] * 1000001
    dp[1], dp[2] = 1, 1
    for i in range(3, 1000001):
        dp[i] = (dp[i-1] + dp[i-2]) % 1000000007
    print(dp[n])

if __name__ == "__main__":
    solution()