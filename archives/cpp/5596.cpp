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

    int S = 0, T = 0;
    int temp;
    FOR(i, 0, 4) {
        cin >> temp;
        S += temp;
    }
    FOR(i, 0, 4) {
        cin >> temp;
        T += temp;
    }

    cout << (S >= T ? S : T);

    return 0;
}