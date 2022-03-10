#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int arr[26];

int main() {
    fastio

    string S; cin >> S;
    int S_len = S.size();
    for (char ch: S) {
        arr[ch - 'A']++;
    }

    int odd_cnt = 0;
    FOR(i, 0, 26) {
        if (arr[i]%2 == 1) {
            odd_cnt++;
        }
        if (odd_cnt >= 2) {
            cout << "I'm Sorry Hansoo";
            return 0;
        }
    }

    string ans = "";
    string mid = "";
    FOR(i, 0, 26) {
        char ch = i+'A';
        FOR(j, 0, arr[i]/2) {
            ans += ch;
        }
        if (arr[i]%2 == 1) {
            mid += ch;
        }
    }

    string rev = ans;
    reverse(rev.begin(), rev.end());
    cout << ans + mid + rev;

    return 0;
}