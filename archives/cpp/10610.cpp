#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N;
vector<int> ans;

int main() { fastio

    string str; cin >> str;
    bool is_zero = false;
    int sum = 0;
    for (char ch: str) {
        if (ch == '0') {
            is_zero = true;
        }
        sum += (ch - '0');
        sum %= 3;
        ans.push_back(ch - '0');
    }

    if (!is_zero || !(sum%3 == 0)) {
        cout << -1; return 0;
    }

    sort(ans.begin(), ans.end(), greater<int>());
    for (auto i: ans) {
        cout << i;
    }

    return 0;
} 