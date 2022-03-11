#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int L, C;
char arr[16];
vector<char> chars;
bool visited[16];

void backtrack(int depth, int min_idx) {
    if (depth == L) {
        int vowel = 0, consonant = 0;
        FOR(i, 0, L) {
            if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'o' || arr[i] == 'i' || arr[i] == 'u') {
                vowel++;
            } else {
                consonant++;
            }
        }

        if (vowel < 1 || consonant < 2) {
            return;
        }

        FOR(i, 0, L) {
            cout << arr[i];
        }
        cout << endl;
        return;
    }

    FOR(i, min_idx, C) {
        if (!visited[i]) {
            arr[depth] = chars[i];
            visited[i] = true;
            backtrack(depth + 1, i);
            visited[i] = false;
        }
    }
}

int main() {
    fastio

    cin >> L >> C;
    chars.resize(C);
    FOR(i, 0, C) {
        cin >> chars[i];
    }
    sort(chars.begin(), chars.end());

    backtrack(0, 0);

    return 0;
}