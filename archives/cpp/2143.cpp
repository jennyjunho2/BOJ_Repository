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
int T;
int n, m;
vector<int> A, B;
vector<ll> A_sum, B_sum;

int main() { fastio

    cin >> T;
    cin >> n; A.resize(n);
    FOR(i, 0, n) { cin >> A[i]; }
    cin >> m; B.resize(m);
    FOR(i, 0, m) { cin >> B[i]; }

    FOR(i, 0, n) {
        int temp_sum = 0;
        FOR(j, i, n) {
            int temp = temp_sum + A[j];
            A_sum.push_back(temp);
            temp_sum = temp;
        }
    }

    FOR(i, 0, m) {
        int temp_sum = 0;
        FOR(j, i, m) {
            int temp = temp_sum + B[j];
            B_sum.push_back(temp);
            temp_sum = temp;
        }
    }

    int A_sum_size = A_sum.size();
    ll ans = 0;
    
    // MITM
    sort(ALL(B_sum));
    FOR(i, 0, A_sum_size) {
        int num = T - A_sum[i];
        ans += upper_bound(B_sum.begin(), B_sum.end(), num) - lower_bound(B_sum.begin(), B_sum.end(), num);
    }

    cout << ans;

    return 0;
}