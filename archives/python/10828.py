import sys

def push_ing(stack, X):
    stack.append(X)

def pop(stack):
    if (len(stack) == 0):
        print(-1)
    else:
        a = stack.pop()
        print(a)
def size(stack):
    print(len(stack))
def empty(stack):
    if (len(stack) == 0):
        print(1)
    else:
        print(0)
def top(stack):
    if (len(stack) == 0):
        print(-1)
    else:
        a = stack.pop()
        print(a)
        stack.append(a)

N = int(sys.stdin.readline().strip())
stack_ans = []
for _ in range(N):
    command = sys.stdin.readline().strip()
    if(command.count(" ") != 0):
        command2, num = command.split()
        push_ing(stack_ans, num)
    else:
        if(command == "top"):
            top(stack_ans)
        elif(command == "size"):
            size(stack_ans)
        elif(command == "empty"):
            empty(stack_ans)
        elif(command == "pop"):
            pop(stack_ans)