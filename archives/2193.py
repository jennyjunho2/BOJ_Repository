import sys
input = sys.stdin.readline

def solution():
    N = int(input())
    dp = [[0, 0] for _ in range(N+1)]
    dp[1][0], dp[1][1] = 0, 1
    for i in range(2, N+1):
        dp[i][0] = dp[i-1][0] + dp[i-1][1]
        dp[i][1] = dp[i-1][0]

    print(sum(dp[N]))
    
if __name__ == "__main__":
    solution()