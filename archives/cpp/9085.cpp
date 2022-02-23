#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T; cin >> T;
    while (T--) {
        int N, temp;
        int sum = 0;
        cin >> N;

        FOR(i, 0, N) {
            cin >> temp;
            sum += temp;
        }

        cout << sum << endl;
    }
    
    return 0;
}