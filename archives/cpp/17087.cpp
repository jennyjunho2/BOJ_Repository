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
int N, S;
vector<int> nums;

int gcd(int a, int b) {
    return b ? gcd(b, a%b) : a;
}

int main() { fastio

    cin >> N >> S; nums.resize(N);
    FOR(i, 0, N) {
        int temp; cin >> temp;
        nums[i] = abs(temp-S);
    }

    int total_gcd = nums[0];
    FOR(i, 1, N) {
        total_gcd = gcd(total_gcd, nums[i]);
    }

    cout << total_gcd;

    return 0;
}