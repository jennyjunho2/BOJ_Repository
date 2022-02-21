import sys
input = sys.stdin.readline

word = input().strip()
table = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']
word = word.replace('c=', "a").replace('c-', "a").replace('dz=', 'a').replace('d-', 'a').replace("lj", "a").replace("nj", "a").replace("s=", "a").replace("z=", "a")
print(len(word))