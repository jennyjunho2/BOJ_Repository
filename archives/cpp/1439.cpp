#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int main() { fastio

    string S; cin >> S;
    int S_len = S.size();
    int cnt = 0;
    FOR(i, 0, S_len-1) {
        if (S[i] != S[i+1]) {
            cnt++;
        }
    }

    cout << (cnt+1)/2;

    return 0;
}