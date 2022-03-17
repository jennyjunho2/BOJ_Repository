#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

vector<int> house;

int main() {
    fastio

    int N, C; cin >> N >> C;
    house.resize(N);
    FOR(i, 0, N) { cin >> house[i]; }
    sort(house.begin(), house.end());

    int left = 1, right = house[N-1] - house[0];
    int ans = 0;

    while (left <= right) {
        int mid = (left + right) / 2;
        int cnt = 1;

        int house_temp = house[0];
        FOR(i, 1, N) {
            if (house[i] - house_temp >= mid) {
                cnt++;
                house_temp = house[i];
            }
        }

        if (cnt >= C) {
            ans = max(ans, mid);
            left = mid+1;
        } else {
            right = mid-1;
        }
    }

    cout << ans;

    
    return 0;
}