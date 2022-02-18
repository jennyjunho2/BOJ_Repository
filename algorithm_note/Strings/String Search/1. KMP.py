# KMP(Knuth, Morris, Pratt) 알고리즘
# 원본 문자열의 길이가 M, 찾는 문자열의 길이가 N이면
# 시간복잡도 : O(M+N)

def getPartialMatch(N):
    m = len(N)
    pi = [0] * m
    # KMP로 N~N을 찾는다.
    begin = 1
    matched = 0
    while begin + matched < m:
        if N[matched + begin] == N[matched]:
            matched += 1
            pi[matched + begin - 1] = matched
        else:
            if matched == 0:
                begin += 1
            else:
                begin += matched - pi[matched - 1]
                matched = pi[matched - 1]
    return pi

def KMP(H, N):
    # H : source
    # N : target
    n = len(H)
    m = len(N)
    result = []
    pi = getPartialMatch(N)

    begin = 0
    matched = 0
    while begin <= n-m:
        # 글자가 일치한다면
        if matched < m and H[begin+matched] == N[matched]:
            matched += 1
            # m 글자가 모두 일치하면
            if matched == m:
                result.append(begin)
        else:
            # matched가 0인 경우 다음 칸에서 시작
            if matched == 0:
                begin += 1
            else:
                begin += matched - pi[matched - 1]
                matched = pi[matched-1]
    return result

H = "abcabcabaddabcdadc"
N = "abc"
print(KMP(H, N))