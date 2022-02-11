import sys
input = sys.stdin.readline

def solution():
    translate = {"A" : "X", "B" : "Y", "C" : "Z"}
    for i in range(68, 91):
        translate[chr(i)] = chr(i-3)

    words = input().strip()
    result = ""
    for word in words:
        result += translate[word]
    print(result)
    
if __name__ == "__main__":
    solution()