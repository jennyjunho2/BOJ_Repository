#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

// string�� python�� splitó�� Ȱ���ϴ� ���
vector<string> split(string str, char Delimiter) {
    istringstream iss(str);
    string buffer;
    vector<string> result;
    
    while (getline(iss, buffer, Delimiter)) {
        result.push_back(buffer);
    }

    return result;
}

// ��Ŭ���� ȣ����
int gcd(const int& a, const int& b) {
    return a&b ? gcd(b, a%b) : b;
}