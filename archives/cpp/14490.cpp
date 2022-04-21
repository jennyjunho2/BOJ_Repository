#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define ALL(x) (x).begin(), (x).end()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
vector<string> split(string str, char delim) {
    istringstream iss(str);
    string buffer;
    vector<string> result;

    while(getline(iss, buffer, delim)) {
        result.push_back(buffer);
    }

    return result;
}

int gcd(int a, int b) {
    return b ? gcd(b, a%b) : a;
}

int main() { fastio

    string S; cin >> S;
    vector<string> vec = split(S, ':');
    int n = stoi(vec[0]), m = stoi(vec[1]);
    int g = gcd(n, m);
    cout << n/g << ':' << m/g;

    return 0;
}