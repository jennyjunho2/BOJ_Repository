#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    int n, m; cin >> n >> m;
    vector<int> mileage;
    FOR(i, 0, n) {
        int Pi, Li; cin >> Pi >> Li;
        vector<int> temp;
        FOR(j, 0, Pi) {
            int tmp; cin >> tmp;
            temp.push_back(tmp);
        }

        if (Pi < Li) {
            mileage.push_back(1);
            continue;
        }
            sort(temp.begin(), temp.end(), greater<int>());
            mileage.push_back(temp[Li-1]);
    }

    sort(mileage.begin(), mileage.end());
    int ans = 0;
    int mileage_size = mileage.size();
    FOR(i, 0, mileage_size) {
        if (mileage[i] <= m) {
            m -= mileage[i];
            ans++;
        } else {
            break;
        }
    }

    cout << ans;

    return 0;
}