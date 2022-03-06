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

    string N; cin >> N;
    if (N == "0") { cout << 0; return 0; }
    string ans = "";
    for (char ch: N) {
        switch (ch) {
            case '0':
                ans += "000";
                break;
            case '1':
                ans += "001";
                break;
            case '2':
                ans += "010";
                break;
            case '3':
                ans += "011";
                break;
            case '4':
                ans += "100";
                break;
            case '5':
                ans += "101";
                break;
            case '6':
                ans += "110";
                break;
            case '7':
                ans += "111";
                break;
        }
    }

    while (ans[0] == '0') {
        ans = ans.substr(1);
    }

    cout << ans;
    return 0;
}