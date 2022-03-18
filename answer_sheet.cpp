#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int main() {
    fastio

    int N, M, K; cin >> N >> M >> K;
    int N_y = 0; int N_x = 0;
    int M_y = N-1; int M_x = M-1;
    int K_y = (K%M == 0 ? K/M-1 : N/5);
    int K_x = (K%M == 0 ? K%M-1 : M-1);
    cout << K_y << ' ' << K_x;

    return 0;
}