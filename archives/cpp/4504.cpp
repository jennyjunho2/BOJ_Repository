#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

vector<string> words;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    while (true) {
        int temp; cin >> temp;
        if (temp == 0) { break; }
        if (temp % n == 0) {
            cout << temp << " is a multiple of " << n << '.' << endl;
        } else {
            cout << temp << " is NOT a multiple of " << n << '.' << endl;
        }
    }

    return 0;
}