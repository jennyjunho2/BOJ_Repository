#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, K;
int gold[1001];
int silver[1001];
int bronze[1001];

int main() { fastio

    cin >> N >> K;
    FOR(i, 0, N) {
        int idx; cin >> idx;
        cin >> gold[idx] >> silver[idx] >> bronze[idx];
    }

    int rank = 0;
    FOR(i, 1, N+1) {
        if (gold[i] > gold[K]) {
            rank++;
        } else if (gold[i] == gold[K]) {
            if (silver[i] > silver[K]) {
                rank++;
            } else if (silver[i] == silver[K]) {
                if (bronze[i] > bronze[K]) {
                    rank++;
                }
            }
        }
    }

    cout << rank+1;

    return 0;
}