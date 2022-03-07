#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    vector<int> v;
    FOR(i, 1, N+1) {
        v.push_back(i);
    }

    do {
        FOR(i, 0, N) {
            cout << v[i] << ' ';
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));
    
    return 0;
}