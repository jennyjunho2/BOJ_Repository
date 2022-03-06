#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

map<string, int> table;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        int N, D; cin >> N >> D;
        int cnt = 0;
        FOR(i, 0, N){
            int v, f, c; cin >> v >> f >> c;
            if (v * f/c >= D) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}