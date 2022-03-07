#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

// string을 python의 split처럼 활용하는 방법
vector<string> split(string str, char Delimiter) {
    istringstream iss(str);
    string buffer;
    vector<string> result;
    
    while (getline(iss, buffer, Delimiter)) {
        result.push_back(buffer);
    }

    return result;
}

// 유클리드 호제법
int gcd(const int& a, const int& b) {
    return a&b ? gcd(b, a%b) : b;
}