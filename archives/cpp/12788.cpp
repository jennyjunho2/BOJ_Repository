#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    int N; cin >> N;
    int M, K; cin >> M >> K;
    vector<int> pens;
    FOR(i, 0, N) {
        int temp; cin >> temp;
        pens.push_back(temp);
    }

    int pen_need = M*K;
    sort(pens.begin(), pens.end(), greater<int>());
    int sum = 0;
    FOR(i, 0, N) {
        sum += pens[i];
        if (sum >= pen_need) {
            cout << i+1;
            return 0;
        }
    }

    cout << "STRESS";

    return 0;
}