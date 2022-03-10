#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    int N; cin >> N;
    FOR(i, 0, N) {
        FOR(j, 0, floor(1+(N-1)/2)) {
            cout << "* ";
        }
        cout << endl;
        FOR(j, 0, ceil((N)/2)) {
            cout << " *";
        }
        cout << endl;
    }

    return 0;
}