#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    vector<int> nums;
    int X, Y; cin >> X >> Y;
    double min_num = (double)1000 / Y * X;
    int N; cin >> N;
    FOR(i, 0, N) {
        int Xi, Yi; cin >> Xi >> Yi;
        min_num = min(min_num, (double)1000 / Yi * Xi);
    }

    cout << fixed;
    cout.precision(2);
    cout << min_num;

    return 0;
}