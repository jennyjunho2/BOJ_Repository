#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    int N; cin >> N;
    while (N--) {
        string K; cin >> K;
        int K_len = K.length();
        int last_num = K[K_len-1] - '0';

        cout << (last_num%2 == 0 ? "even" : "odd") << endl;
    }
    

    return 0;
}