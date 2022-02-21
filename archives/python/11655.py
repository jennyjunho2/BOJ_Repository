import sys
input = sys.stdin.readline

import codecs
print(codecs.encode(input().rstrip(), 'rot_13'))