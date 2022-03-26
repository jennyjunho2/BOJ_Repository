#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, K;

int main() { fastio

    cin >> N >> K;
    string S; cin >> S;
    
    stack<char> s;
    int S_len = S.size();
    FOR(i, 0, S_len) {
        while (!s.empty() && s.top() < S[i] && K) {
            s.pop();
            K--;
        }
        s.push(S[i]);
    }

    while(K) {
        s.pop();
        K--;
    }
    
    string ans = "";
    while(!s.empty()) {
        ans += s.top();
        s.pop();
    }

    reverse(ans.begin(), ans.end());
    cout << ans;

    return 0;
} 