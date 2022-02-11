import sys
input = sys.stdin.readline

S = input().strip()
print("not cute" if len(S) < 5 or S[-5:] != 'driip' else "cute")