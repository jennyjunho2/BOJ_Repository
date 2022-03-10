#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

vector<string> words;

bool is_palindrome(string S) {
    int S_size = S.size();
    FOR(i, 0, S_size/2) {
        if (S[i] != S[S_size-1-i]) {
            return false;
        }
    }

    return true;
}

int main() {
    fastio

    int T; cin >> T;
    while (T--) {
        int k; cin >> k;
        words.clear();
        FOR(i, 0, k) {
            string temp; cin >> temp;
            words.push_back(temp);
        }

        bool is_no_palindrome = true;
        FOR(i, 0, k) {
            FOR(j, 0, k) {
                if (i == j || !is_no_palindrome) {
                    continue;
                } else {
                    string new_s = words[i] + words[j];
                    if (is_palindrome(new_s)) {
                        int new_s_len = new_s.size();
                        FOR(k, 0, new_s_len) {
                            cout << new_s[k];
                        }
                        cout << endl;
                        is_no_palindrome = false;
                    }
                }
            }
        }

        if (is_no_palindrome) {
            cout << 0 << endl;
        }
    }

    return 0;
}