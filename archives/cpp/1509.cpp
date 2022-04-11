#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
string word;
ll palindrome[2501][2501];
ll dp[2501];

int check(int start, int end) {
    if (start >= end) { return 1; }

    if (palindrome[start][end] != -1){ return palindrome[start][end]; }
    
    if (word[start] != word[end]) {
        palindrome[start][end] = 0;
        return 0;
    }

    return palindrome[start][end] = check(start+1, end-1);
}

int main() { fastio

    memset(palindrome, -1, sizeof(palindrome));
    fill(dp, dp+2501, int(1e9));
    dp[0] = 0;

    cin >> word;
    int word_size = word.size();
    word = '#' + word;

    FOR(i, 1, word_size+1) {
        dp[i] = dp[i-1] + 1;
        FOR(j, 1, i) {
            if (check(j, i)) {
                dp[i] = min(dp[i], dp[j-1]+1);
            }
        }
    }

    cout << dp[word_size];

    return 0;
}