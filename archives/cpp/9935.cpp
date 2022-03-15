#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

vector<char> s;

int main() {
    fastio

    string word; cin >> word;
    string bomb; cin >> bomb;
    int word_size = word.size();
    int bomb_size = bomb.size();
    FOR(i, 0, word_size) {
        s.push_back(word[i]);

        int s_size = s.size();
        if (s_size >= bomb_size) {
            bool is_bomb = true;
            FOR(j, 0, bomb_size) {
                if (s[s_size - bomb_size + j] != bomb[j]) {
                    is_bomb = false;
                    break;
                }
            }

            if (is_bomb) {
                FOR(_, 0, bomb_size) {
                    s.pop_back();
                }
            }
        }
    }

    if (s.empty()) {
        cout << "FRULA" << endl;
    } else {
        int s_size = s.size();
        FOR(i, 0, s_size) {
            cout << s[i];
        }
    }

    return 0;
}