#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define ALL(x) (x).begin(), (x).end()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N;
vector<int> nums;
int X, Y;

int main() { fastio

    cin >> N; nums.resize(N);
    FOR(i, 0, N) { cin >> nums[i]; }
    cin >> X >> Y;

    cout << N*X/100 << ' ';
    cout << count_if(nums.begin(), nums.end(), [](const int& x) { return x >= Y; });

    return 0;
}