#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T; cin >> T;
    int N, L;
    string school;

    int max = 0;
    string ans;
    while (T--) {
        cin >> N;
        for (int i = 0; i < N; i++) {
            cin >> school >> L;
            if (L > max) {
                max = L;
                ans = school;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}