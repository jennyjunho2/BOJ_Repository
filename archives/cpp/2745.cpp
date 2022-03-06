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

    string N; int B; cin >> N >> B;
    int result = 0;
    for (char ch: N) {
        if (ch >= 'A'){
            result = result*B + (ch - 'A' + 10);
        } else {
            result = result*B + (ch - '0');
        }
    }

    cout << result;

    return 0;
}