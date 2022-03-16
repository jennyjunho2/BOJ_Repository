#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int main() {
    fastio

    int N, M; cin >> N >> M;
    string word; cin >> word;

    int cnt = 0;
    FOR(i, 0, M) {
        int ioi = 0;
        if (word[i] == 'O') {
            continue;
        }

        while (word[i+1] == 'O' && word[i+2] == 'I') {
            ioi++;
            if (ioi == N) {
                ioi--;
                cnt++;
            }
            i += 2;
        }
        ioi = 0;
    }

    cout << cnt;

    return 0;
}