#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        int cnt = 0;
        int N, M; cin >> N >> M;
        FOR(i, N, M+1) {
            string str = to_string(i);
            cnt += count(str.begin(), str.end(), '0');
        }
        cout << cnt << endl;
    }

    return 0;
}