#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    int temp;
    while (T--) {
        int min = 200;
        int sum = 0;
        FOR(i, 0, 7) {
            cin >> temp;
            if (temp % 2 == 0) {
                sum += temp;
                if (min > temp) {
                    min = temp;
                }
            }
        }

        cout << sum << ' ' << min << endl;
    }

    return 0;
}