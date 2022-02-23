#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start;i < end;i++)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        int C; float G;
        int C_sum = 0; float G_sum = 0.0;

        FOR(i, 0, N) {
            cin >> C >> G;
            C_sum += C;
            G_sum += (G * C);    
        }
        cout << fixed;
        cout.precision(1);
        cout << C_sum << ' ' << G_sum / C_sum << "\n";
    }

    return 0;
}