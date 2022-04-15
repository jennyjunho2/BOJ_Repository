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
string S;

string sum(string str) {
    int temp = 0;
    for (char ch: str) {
        temp += (ch - '0');
    }
    
    return to_string(temp);
}

int main() { fastio

    cin >> S;
    int cnt = 0;
    while(S.size() > 1) {
        cnt++;
        S = sum(S);
    }

    cout << cnt << endl;
    cout << (stoi(S)%3 == 0 ? "YES" : "NO");

    return 0;
}