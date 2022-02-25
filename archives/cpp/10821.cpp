#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string S; cin >> S;
    int cnt = 1;
    for (auto word : S) {
        if (word == ',') {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}