#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int K, D, A;

vector<string> split(string str, char delimiter) {
    istringstream iss(str);
    string buf;
    vector<string> result;

    while(getline(iss, buf, delimiter)) {
        result.push_back(buf);
    }

    return result;
}

int main() { fastio

    string S; cin >> S;
    vector<string> ans = split(S, '/');
    int K = stoi(ans[0]), D = stoi(ans[1]), A = stoi(ans[2]);

    cout << ((K+A < D || D == 0) ? "hasu" : "gosu");

    return 0;
} 