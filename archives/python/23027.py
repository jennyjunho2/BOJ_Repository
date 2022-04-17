import sys
input = sys.stdin.readline

S = input().strip()
is_a_exist = "A" in S
is_b_exist = "B" in S
is_c_exist = "C" in S

if is_a_exist:
    S = S.replace("B", "A").replace("C", "A").replace("D", "A").replace("F", "A")
elif is_b_exist:
    S = S.replace("C", "B").replace("D", "B").replace("F", "B")
elif is_c_exist:
    S = S.replace("D", "C").replace("F", "C")
else:
    S = "A"*len(S)
print(S)
