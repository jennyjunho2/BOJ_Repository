#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

string binary(int num) {
    string result;
    while (num != 0) {
        result += (num % 2 == 0 ? "0" : "1");
        num /= 2;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        int n;
        cin >> n;
        string N = binary(n);
        FOR(i, 0, N.length()) {
            if (N[i] == '1') {
                cout << i << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}