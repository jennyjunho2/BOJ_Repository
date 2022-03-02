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

    int cnt = 1;
    while (true) {
        int a; cin >> a;
        string func; cin >> func;
        int b; cin >> b;
        string result;
        if (func == ">") {
            result = (a > b ? "true" : "false");
        } else if (func == ">=") {
            result = (a >= b ? "true" : "false");
        } else if (func == "<") {
            result = (a < b ? "true" : "false");
        } else if (func == "<=") {
            result = (a <= b ? "true" : "false");
        } else if (func == "==") {
            result = (a == b ? "true" : "false");
        } else if (func == "!=") {
            result = (a != b ? "true" : "false");
        } else { break; }

        cout << "Case " << cnt << ": " << result << endl;
        cnt++;
    }

    return 0;
}