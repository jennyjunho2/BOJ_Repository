#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    string N; cin >> N;
    int N_len = N.size();
    FOR(i, 1, N_len) {
        string A = N.substr(0, i);
        string B = N.substr(i);

        int A_num = 1, B_num = 1;
        for (char ch: A) {
            A_num *= (ch-'0');
        }
        for (char ch: B) {
            B_num *= (ch-'0');
        }

        if (A_num == B_num) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}