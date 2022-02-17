import sys
input = sys.stdin.readline
print = sys.stdout.write

words = input().rstrip()
bomb = input().rstrip()
stack = []
N = len(bomb)
bomb_last = bomb[-1]

for word in words:
    stack.append(word)
    if word == bomb_last and "".join(stack[-N:]) == bomb:
        del stack[-N:]

if not stack:
    print("FRULA\n")
else:
    print("".join(stack) + "\n")