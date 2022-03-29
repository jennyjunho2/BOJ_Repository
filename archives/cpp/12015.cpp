#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define INF int(1e9);
int N;
vector<int> nums;
vector<int> LIS;

int main() {fastio

    cin >> N;
    nums.resize(N);
    LIS.push_back(INT_MIN);

    int temp;
    int cnt = 0;
    FOR(i, 0, N) {
        cin >> temp;
        if (temp > LIS.back()) { 
            LIS.push_back(temp);
            cnt++;
        } else {
            auto it = lower_bound(LIS.begin(), LIS.end(), temp);
            *it = temp;
        }
    }

    cout << cnt;


    return 0;
}