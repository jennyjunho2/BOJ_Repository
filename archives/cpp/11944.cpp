#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string N; int M;
    cin >> N >> M;
    int N_len = N.length();
    if (N_len * stoi(N) <= M) {
        FOR(i, 0, stoi(N)) {
            cout << N;
        }
    } else {
        FOR(i, 0, M / N_len) {
            cout << N;
        }
        cout << N.substr(0, M % N_len);
    }

    return 0;
}