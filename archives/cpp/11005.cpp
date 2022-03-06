#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, B; cin >> N >> B;
    string ans = "";
    while (N > 0) {
        int rem = N % B;
        if (rem >= 10) {
            ans += char(rem -10 + 'A');
        } else {
            ans += char(rem + '0');
        }
        N /= B;
    }

    reverse(ans.begin(), ans.end());
    cout << ans;

    return 0;
}