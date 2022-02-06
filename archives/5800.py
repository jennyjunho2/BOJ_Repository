import sys
input = sys.stdin.readline

T = int(input())
for i in range(1, T+1):
    nums = sorted(list(map(int, input().split()))[1:])
    max_num, min_num = nums[-1], nums[0]
    largest_gap = max([nums[i+1]-nums[i] for i in range(len(nums)-1)])
    
    print(f"Class {i}")
    print(f"Max {max_num}, Min {min_num}, Largest gap {largest_gap}")