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

    int N, W, H; cin >> N >> W >> H;
    while (N--) {
        int length; cin >> length;
        int max_len = sqrt(W*W + H*H);
        if (length <= max_len) {
            cout << "DA" << endl;
        } else {
            cout << "NE" << endl;
        }
    }

    return 0;
}