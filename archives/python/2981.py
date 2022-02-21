import sys
input = sys.stdin.readline

from math import gcd
def solution():
    N = int(input())
    nums = sorted([int(input()) for _ in range(N)])
    GCD = gcd(*[nums[x+1] - nums[x] for x in range(len(nums)-1)])

    result = []
    for i in range(2, int(GCD ** 0.5) + 1):
        if GCD % i == 0:
            result.append(i)
            result.append(GCD // i)
    result.append(GCD)
    result = sorted(list(set(result)))

    print(" ".join(map(str, result)))
    
if __name__ == "__main__":
    solution()