#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> W;
    vector<int> K;
    FOR(i, 0, 10) {
        int temp; cin >> temp;
        W.push_back(temp);
    }
    FOR(j, 0, 10) {
        int temp; cin >> temp;
        K.push_back(temp);
    }
    sort(W.begin(), W.end());
    sort(K.begin(), K.end());
    cout << W[7] + W[8] + W[9] << ' ' << K[7] + K[8] + K[9];
    return 0;
}