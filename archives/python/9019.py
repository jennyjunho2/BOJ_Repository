import sys
input = sys.stdin.readline

from collections import deque

def D(num):
    return 2*num % 10000

def S(num):
    return num-1 if num else 9999

def L(num):
    return num // 1000 + (num % 1000) * 10

def R(num):
    return num // 10 + (num % 10) * 1000

def apply_func(L, num):
    result = []
    for f in L:
        result.append(f(num))
    return result

T = int(input())
func_str = ["D", "S", "L", "R"]
func_list = [D, S, L, R]
for _ in range(T):
    A, B = map(int, input().split())
    visited = [False] * 10000
    queue = deque([(A, "")])
    visited[A] = True
    while queue:
        x, command = queue.popleft()
        
        if x == B:
            print(command)
            break
        
        next_nums = apply_func(func_list, x)
        for i in range(len(next_nums)):
            if not visited[next_nums[i]]:
                y = command + func_str[i]
                visited[next_nums[i]] = True
                queue.append((next_nums[i], y))