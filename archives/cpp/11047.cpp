#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K; cin >> N >> K;
    vector<int> coins;
    FOR(i, 0, N){
        int temp; cin >> temp;
        coins.push_back(temp);
    }

    sort(coins.begin(), coins.end(), greater<int>());
    int cnt = 0;
    for (auto coin: coins) {
        cnt += (K / coin);
        K %= coin;
    }
    cout << cnt;

    return 0;
}