from collections import deque

while 1:
    stack = deque()
    sentence = input()
    if (sentence == "."): break
    else:
        for i in sentence:
            if (i == "(" or i == "["):
                stack.append(i)
            elif(i == ")"):
                if(len(stack) == 0):
                    stack.append(i)
                else:
                    top = stack.pop()
                    if (top == "("):
                        pass
                    else:
                        stack.append(top)
                        stack.append(i)
            elif(i == "]"):
                if(len(stack) == 0):
                    stack.append(i)
                else:
                    top = stack.pop()
                    if (top =="["):
                        pass
                    else:
                        stack.append(top)
                        stack.append(i)
    if (len(stack) ==0): print("yes")
    else: print("no")