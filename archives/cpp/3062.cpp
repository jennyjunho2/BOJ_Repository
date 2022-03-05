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

    int T; cin >> T;
    while (T--) {
        string N; cin >> N;
        string N2 = N;
        reverse(N2.begin(), N2.end());
        string num = to_string(stoi(N) + stoi(N2));
        int num_len = num.length();

        bool flag = true;
        FOR(i, 0, num_len/2) {
            if (num[i] != num[num_len-i-1]) {
                flag = false;
                break;
            }
        }

        if (flag) { cout << "YES" << endl; }
        else { cout << "NO" << endl; }
    }
    
    return 0;
}