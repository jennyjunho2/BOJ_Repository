#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

vector<string> words;
bool alpha[26];
int ans = 0;
int N, K;

int comp() {
    int cnt = 0;
    int words_size = words.size();
    FOR(i, 0, words_size) {
        string word = words[i];
        bool can_read = true;
        for (char ch: word) {
            if (!alpha[ch - 'a']) {
                can_read = false;
                break;
            }
        }

        if (can_read) { cnt++; }
    }

    return cnt;
}

void backtrack(int depth, int min_idx)  {
    if (depth == K) {
        ans = max(ans, comp());
        return;
    }

    FOR(i, min_idx, 26) {
        if (!alpha[i]) {
            alpha[i] = true;
            backtrack(depth + 1, i);
            alpha[i] = false;
        }
    }
}

int main() {
    fastio

    cin >> N >> K;
    if (K < 5) { cout << 0; return 0; }
    words.resize(N);
    FOR(i, 0, N) {
        cin >> words[i];
    }

    alpha['a' - 'a'] = true; alpha['n' - 'a'] = true;
    alpha['t' - 'a'] = true; alpha['i' - 'a'] = true;
    alpha['c' - 'a'] = true;
    K -= 5;

    backtrack(0, 0);
    
    cout << ans;
    
    return 0;
}