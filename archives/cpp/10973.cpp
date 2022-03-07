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
        int temp; cin >> temp;
        v.push_back(temp);
    }

    if (prev_permutation(v.begin(), v.end())) {
        FOR(i, 0, N) {
            cout << v[i] << ' ';
        }
    } else {
        cout << -1;
    }
    
    return 0;
}