import sys
while True :
    try :
        a = sys.stdin.readline()
        A, B = map(int, a.split())
        print(A+B)
    except :
        break