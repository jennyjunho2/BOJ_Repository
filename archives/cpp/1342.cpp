#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;


int main() {
    fastio

    string S; cin >> S;
    int S_len = S.length();
    int cnt = 0;

    sort(S.begin(), S.end());

    do {
        bool lucky = true;
        FOR(i, 1, S_len-1) {
            if ((S[i-1] == S[i]) || (S[i] == S[i+1])) {
                lucky = false;
                break;
            }
        }

        if (lucky) {
            cnt++;
        }

    } while(next_permutation(S.begin(), S.end()));
    
    cout << cnt;

    return 0;
}